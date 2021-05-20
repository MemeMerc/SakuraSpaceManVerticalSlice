// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_CPP.h"
//#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Math/UnrealMathUtility.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "Components/SphereComponent.h"


// Sets default values TEST
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

	GrappleCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("GrappleRange"));
	GrappleCollisionSphere->InitSphereRadius(3000.f);
	GrappleCollisionSphere->SetupAttachment(RootComponent);
	GrappleCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &APlayer_CPP::Grapple_OnBeginOverlap);
	GrappleCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &APlayer_CPP::Grapple_OnOverlapEnd);
	GrappleCollisionSphere->bHiddenInGame = false;
	


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

	fLocalDeltaTime = _fDeltaTime;

	if (!bIsGrappleArrayEmpty)
	{
		for (AActor* aActor : aGrapplePoints)
		{
			if (aSelectedGrapplePoint == nullptr)
			{
				aSelectedGrapplePoint = aActor;
			}
			else if (FVector::Dist(aActor->GetActorLocation(), this->GetActorLocation()) < FVector::Dist(aSelectedGrapplePoint->GetActorLocation(), this->GetActorLocation()))
			{
				aSelectedGrapplePoint = aActor;
			}
		}
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Current: " + aSelectedGrapplePoint->GetName()));

	}

	//Return friction factor to normal, produce a slide effect when stopping fast movement.
	if (bIsMoving == false && GetCharacterMovement()->BrakingFrictionFactor < fFriction-0.1	 && !GetCharacterMovement()->IsFalling())
	{

		float fTemp = GetCharacterMovement()->BrakingFrictionFactor + (1.f * _fDeltaTime);
		fTemp = FMath::Clamp(fTemp, 0.f, fFriction);
		if (fTemp > fFriction)
		{
			fTemp = fFriction;
		}
		GetCharacterMovement()->BrakingFrictionFactor = fTemp;
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

	_PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &APlayer_CPP::DashForward);

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

//Produce forward and back charadcter movement.
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

//Produce left and right character movement.
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

//Check if Player is moving forward
void APlayer_CPP::CheckWalkForward()
{
	bIsForward = true;
}

//Reset Player movement to default movement parameters if previously sprinting.
void APlayer_CPP::ResetWalkValue()
{
	bIsForward = false;
	if (iCurrentSpeed != 0)
	{
		iCurrentSpeed = 0;
		GetCharacterMovement()->MaxAcceleration = fMaxAcceleration[0];
		GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[0];
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("%f"), iCurrentSpeed));
	}
}

//Allow player to jump and double jump.
void APlayer_CPP::Jump()
{
	//Check if player hasn't jumped and is not falling
	if (iJumpAmount == 0 && !GetCharacterMovement()->IsFalling())
	{
		ACharacter::Jump();
		iJumpAmount++;
	}
	else if (iJumpAmount < iMaxJumpAmount)
	{
		FVector vJump = FVector(GetCharacterMovement()->Velocity.X, GetCharacterMovement()->Velocity.Y, GetCharacterMovement()->JumpZVelocity);

		GetCharacterMovement()->Launch(vJump);
		iJumpAmount++;
	}
	
}

//If player has landed, reset jump count to zero.
void APlayer_CPP::Landed(const FHitResult& Hit)
{

	Super::Landed(Hit);

	iJumpAmount = 0;

}

void APlayer_CPP::StopJumping()
{
	ACharacter::StopJumping();
}

//Called when player changes movement type.
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

void APlayer_CPP::DashForward()
{

	if (Controller != nullptr && !bHasDashed)
	{
		
		
		FTimerDelegate DashStopDelegate;
		FTimerDelegate DashResetDelegate;
		vPrevSpeed = GetCharacterMovement()->Velocity.Size();
		DashStopDelegate.BindLambda([_vel = vPrevSpeed, _GetCMC = GetCharacterMovement(),_ForwardVec = GetActorForwardVector()]()mutable{

			
			_GetCMC->Launch(_ForwardVec* _vel);
			
		});
		bool *bHasDashedPtr = &bHasDashed;
		DashResetDelegate.BindLambda([_HasDashed = bHasDashedPtr]()mutable{

			
			*_HasDashed = false;
			
		});



		GetCharacterMovement()->Launch(GetActorForwardVector() * (fDashSpeed+GetCharacterMovement()->Velocity.Size()));
		GetWorldTimerManager().SetTimer(DashTimer, DashStopDelegate, 0.2f, false);
		bHasDashed = true;
		GetWorldTimerManager().SetTimer(DashResetTimer, DashResetDelegate, fDashCooldown+0.2f, false);
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("%f"), test));
	}


}

void APlayer_CPP::Grapple_OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor->ActorHasTag(FName("Grapple")))
	{


		aGrapplePoints.AddUnique(OtherActor);
		bIsGrappleArrayEmpty = false;
		for (AActor* aActor : aGrapplePoints)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Collision: "+ aActor->GetName()));
		}
	}
}


void APlayer_CPP::Grapple_OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
	if (OtherActor->ActorHasTag(FName("Grapple")))
	{
		aGrapplePoints.RemoveAt(aGrapplePoints.Find(OtherActor));
		if (aGrapplePoints.Num() == 0)
		{
			bIsGrappleArrayEmpty = true;
		}
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Deleted"));
		
	}


}