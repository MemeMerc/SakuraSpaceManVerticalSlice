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

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 900.f;
	GetCharacterMovement()->AirControl = 1.f;
	GetCharacterMovement()->BrakingFrictionFactor = fFriction;
	GetCharacterMovement()->GravityScale = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = fMaxWalkSpeed;
	GetCharacterMovement()->MaxAcceleration = fDefaultAcceleration;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	Camera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	fDefaultAcceleration = GetCharacterMovement()->MaxAcceleration;

}

// Called when the game starts or when spawned
void APlayer_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_CPP::Tick(float _fDeltaTime)
{
	Super::Tick(_fDeltaTime);


	if (bIsSprinting == false && GetCharacterMovement()->BrakingFrictionFactor <= fFriction && !GetCharacterMovement()->IsFalling())
	{

		GetCharacterMovement()->BrakingFrictionFactor = GetCharacterMovement()->BrakingFrictionFactor + (0.3f * _fDeltaTime);

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

	_PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_CPP::MoveForward);
	_PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_CPP::MoveRight);	

	_PlayerInputComponent->BindAxis("LookTurn", this, &APlayer_CPP::LookTurn);
	_PlayerInputComponent->BindAxis("LookUp", this, &APlayer_CPP::LookUp);

}

void APlayer_CPP::LookTurn(float _fScale)
{

	if ((GetCharacterMovement()->Velocity.Size() > fMaxWalkSpeed) && !GetCharacterMovement()->IsFalling())
	{

		_fScale = FMath::Clamp(_fScale, -fCameraClamp, fCameraClamp);

	}


	APawn::AddControllerYawInput(_fScale);

}
void APlayer_CPP::LookUp(float _fScale)
{
	if ((GetCharacterMovement()->Velocity.Size() > fMaxWalkSpeed) && !GetCharacterMovement()->IsFalling())
	{
	
		_fScale = FMath::Clamp(_fScale, -fCameraClamp, fCameraClamp);

	}

	APawn::AddControllerPitchInput(_fScale);
}


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
	if (Controller != nullptr)
	{
		bIsSprinting = true;
		GetCharacterMovement()->BrakingFrictionFactor = 0.1f;
		GetCharacterMovement()->MaxAcceleration = fRunAcceleration;
		GetCharacterMovement()->MaxWalkSpeed = fMaxSprintSpeed;
	}
}
void APlayer_CPP::StopSprinting()
{

	if (Controller != nullptr)
	{
		bIsSprinting = false;
		GetCharacterMovement()->MaxAcceleration = fDefaultAcceleration;
		GetCharacterMovement()->MaxWalkSpeed = fMaxWalkSpeed;
		
	}


}