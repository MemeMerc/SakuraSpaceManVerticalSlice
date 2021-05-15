// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_CPP.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
APlayer_CPP::APlayer_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Define Movement Stages

	//Walk-Default
	fMaxSpeed.Add(1300.f);
	fMaxAcceleration.Add(2024.f);

	//Stage 1 Run
	fMaxSpeed.Add(3000.f);
	fMaxAcceleration.Add(1000.f);

	//Stage 2 Run
	fMaxSpeed.Add(6000.f);
	fMaxAcceleration.Add(800.f);

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 900.f;
	GetCharacterMovement()->AirControl = 1.f;
	GetCharacterMovement()->BrakingFrictionFactor = fFriction;
	GetCharacterMovement()->GravityScale = 3.f;
	GetCharacterMovement()->MaxAcceleration = fMaxAcceleration[0];
	GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[0];

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	Camera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	




}

// Called when the game starts or when spawned
void APlayer_CPP::BeginPlay()
{
	Super::BeginPlay();
	GetCharacterMovement()->BrakingFrictionFactor = 0.1f;
	GetCharacterMovement()->BrakingFrictionFactor = fFriction;
}

// Called every frame
void APlayer_CPP::Tick(float _fDeltaTime)
{
	Super::Tick(_fDeltaTime);


	if (bIsMoving == false && GetCharacterMovement()->BrakingFrictionFactor < fFriction-0.1	 && !GetCharacterMovement()->IsFalling())
	{

		float ftemp = GetCharacterMovement()->BrakingFrictionFactor + (1.f * _fDeltaTime);
		ftemp = FMath::Clamp(ftemp, 0.f, fFriction);
		if (ftemp > fFriction)
		{
			ftemp = fFriction;
		}
		GetCharacterMovement()->BrakingFrictionFactor = ftemp;
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("%f"), GetCharacterMovement()->BrakingFrictionFactor));

	}

}

// Called to bind functionality to input
void APlayer_CPP::SetupPlayerInputComponent(UInputComponent* _PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(_PlayerInputComponent);

	// Set up gameplay key bindings
	check(_PlayerInputComponent);
	_PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayer_CPP::Jump);
	_PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayer_CPP::StopJumping);

	_PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayer_CPP::Sprint);
	_PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayer_CPP::StopSprinting);

	_PlayerInputComponent->BindAction("SprintCheck", IE_Pressed, this, &APlayer_CPP::CheckWalkForward);
	_PlayerInputComponent->BindAction("SprintCheck", IE_Released, this, &APlayer_CPP::ResetWalkValue);

	_PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_CPP::MoveForward);
	_PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_CPP::MoveRight);	

	_PlayerInputComponent->BindAxis("LookTurn", this, &APlayer_CPP::LookTurn);
	_PlayerInputComponent->BindAxis("LookUp", this, &APlayer_CPP::LookUp);

}

//Mouse Look left-right
void APlayer_CPP::LookTurn(float _fScale)
{

	if ((GetCharacterMovement()->Velocity.Size() > fMaxSpeed[0]) && !GetCharacterMovement()->IsFalling())
	{

		_fScale = FMath::Clamp(_fScale, -fCameraClamp, fCameraClamp);

	}


	APawn::AddControllerYawInput(_fScale);

}

//Mouse Look Up
void APlayer_CPP::LookUp(float _fScale)
{
	if ((GetCharacterMovement()->Velocity.Size() > fMaxSpeed[0]) && !GetCharacterMovement()->IsFalling())
	{
	
		_fScale = FMath::Clamp(_fScale, -fCameraClamp, fCameraClamp);

	}

	APawn::AddControllerPitchInput(_fScale);
}

//Move Forward
void APlayer_CPP::MoveForward(float _fScale)
{
	if ((Controller != nullptr) && (_fScale != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, _fScale, true);
		bIsMoving = true;
		
	}
	else if (bIsMoving)	//Set Moving to false
	{
		bIsMoving = false;
	}
}

void APlayer_CPP::MoveRight(float _fScale)
{
	if ((Controller != nullptr) && (_fScale != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, _fScale, true);
	}
}

void APlayer_CPP::CheckWalkForward()
{
	bIsForward = true;
	GetCharacterMovement()->BrakingFrictionFactor = fFriction;
}

void APlayer_CPP::ResetWalkValue()
{
	bIsForward = false;
	iCurrentSpeed = 0;
	GetCharacterMovement()->MaxAcceleration = fMaxAcceleration[0];
	GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[0];
}


void APlayer_CPP::Jump()
{
	if (iJumpAmount == 1)
	{

		ACharacter::Jump();
		iJumpAmount++;
	}
	else if (iJumpAmount <= iMaxJumpAmount)
	{
		FVector vJump = FVector(GetCharacterMovement()->Velocity.X, GetCharacterMovement()->Velocity.Y, GetCharacterMovement()->JumpZVelocity);

		GetCharacterMovement()->Launch(vJump);
		iJumpAmount++;
	}
	
}

void APlayer_CPP::Landed(const FHitResult& Hit)
{

	Super::Landed(Hit);

	iJumpAmount = 1;

}

void APlayer_CPP::StopJumping()
{
	ACharacter::StopJumping();
}


void APlayer_CPP::Sprint()
{
	if ((Controller != nullptr) && bIsForward)
	{
		iCurrentSpeed++;
		bIsSprinting = true;
		iCurrentSpeed = FMath::Clamp(iCurrentSpeed, 0, 2);

		GetCharacterMovement()->BrakingFrictionFactor = 0.1f;
		GetCharacterMovement()->MaxAcceleration = fMaxAcceleration[iCurrentSpeed];
		GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[iCurrentSpeed];

	}
}
void APlayer_CPP::StopSprinting()
{

	if (Controller != nullptr)
	{
		bIsSprinting = false;
		
	}


}