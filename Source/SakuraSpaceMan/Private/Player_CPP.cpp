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
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GrappleLocation_CPP.h"
#include "TimerManager.h"


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

	//Platforming Mode
	fMaxSpeed.Add(1300.f);
	fMaxAcceleration.Add(2024.f);

	//Sprinting Mode
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

	//Create Grapple Range Sphere
	GrappleCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("GrappleRange"));
	GrappleCollisionSphere->InitSphereRadius(3000.f);
	GrappleCollisionSphere->SetupAttachment(RootComponent);
	GrappleCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &APlayer_CPP::Grapple_OnBeginOverlap);
	GrappleCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &APlayer_CPP::Grapple_OnOverlapEnd);
	GrappleCollisionSphere->bHiddenInGame = false;
	
	//Allocate player controller variable.
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	//Give Capsule Component the "Player" Tag (Used when identifing the player).
	this->GetCapsuleComponent()->ComponentTags.Add((FName("Player")));

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
	
	//Check which grapple point is closest to the center of the screen.
	if ( !bIsReelingIn && PlayerController != nullptr && aGrapplePoints.Num() != 0)
	{
		AActor* SelectActor = nullptr;
		AGrappleLocation_CPP* SelectedGrapplePoint = Cast<AGrappleLocation_CPP>(aSelectedGrapplePoint);
		for (AActor* aActor : aGrapplePoints)
		{
			if (aActor->IsValidLowLevelFast())
			{
				AGrappleLocation_CPP *GrapplePoint = Cast<AGrappleLocation_CPP>(aActor);
				
				//Check if that actor is on screen.
				if (PlayerController->ProjectWorldLocationToScreen(GrapplePoint->GetActorLocation(), *GrapplePoint->GetScreenLoc()))
				{
					GrapplePoint->SetScreenLen(FindDistanceToCenterScreen(GrapplePoint));
					if (GrapplePoint->GetScreenLen() < 300)
					{
						//If there is no selected grapple point, then select current point.
						if (aSelectedGrapplePoint == nullptr)
						{
							SelectActor = aActor;
						}
						//Check if which grapple point is closest to center screen.
						else if((SelectedGrapplePoint->GetScreenLen() > GrapplePoint->GetScreenLen())
						&& (GrapplePoint->GetName() != SelectedGrapplePoint->GetName()))
						{
							SelectActor = aActor;
						}	
					}
				}
			}
		}
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Current: " + aSelectedGrapplePoint->GetName()));
		//Set new Grapple Location as target for player
		if (SelectActor != nullptr)
		{
			//Make Target Widget for previous grapple location invisible
			if (SelectedGrapplePoint != nullptr)
			{
				SelectedGrapplePoint->SetWidgetVisibility(false);
			}
			aSelectedGrapplePoint = SelectActor;
			Cast<AGrappleLocation_CPP>(aSelectedGrapplePoint)->SetWidgetVisibility(true);
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Current: " + SelectActor->GetName()));
			
		}
		else if (SelectedGrapplePoint != nullptr)
		{
			if (SelectedGrapplePoint->GetScreenLen() > 300)
			{
				SelectedGrapplePoint->SetWidgetVisibility(false);
				aSelectedGrapplePoint = nullptr;
			}
		}
	}

	//Return friction factor to normal, produce a slide effect when stopping fast movement.
	if ((bIsMoving == false || bIsSprinting == false) && GetCharacterMovement()->BrakingFrictionFactor < fFriction-0.1 && !GetCharacterMovement()->IsFalling())
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

	//Debug Stuff//
	GEngine->AddOnScreenDebugMessage(-1, 0.001f, FColor::Yellow, FString::Printf(TEXT("Speed: %f"), GetCharacterMovement()->Velocity.Size()));

	if (bIsReelingIn)
	{

		GEngine->AddOnScreenDebugMessage(-1, 0.001f, FColor::Yellow, TEXT("IsReelingIn: True"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.001f, FColor::Yellow, TEXT("IsReelingIn: False"));
	}

	if (aSelectedGrapplePoint != nullptr)
	{
		AGrappleLocation_CPP* SelectedGrapplePoint = Cast<AGrappleLocation_CPP>(aSelectedGrapplePoint);
		GEngine->AddOnScreenDebugMessage(-1, 0.001f, FColor::Yellow, FString::Printf(TEXT("Current Screen Length: %f"), SelectedGrapplePoint->GetScreenLen()));
	}

}

//Find the distance of an actor to the center of the screen.
float APlayer_CPP::FindDistanceToCenterScreen(AActor* _aActor)
{
	FVector2D vViewportDimensions;
	FVector2D vResultVector;

	float fResultLength;
	int iViewportX;
	int iViewportY;

	AGrappleLocation_CPP* GrapplePoint = Cast<AGrappleLocation_CPP>(_aActor);
	PlayerController->GetViewportSize(iViewportX, iViewportY);
	vViewportDimensions = FVector2D(iViewportX, iViewportY);
	PlayerController->ProjectWorldLocationToScreen(GrapplePoint->GetActorLocation(), *GrapplePoint->GetScreenLoc());

	vResultVector = (vViewportDimensions /2) - *GrapplePoint->GetScreenLoc();
	fResultLength = vResultVector.Size();
	return(fResultLength);
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

	_PlayerInputComponent->BindAction("Grapple", IE_Pressed, this, &APlayer_CPP::GrappleActivate);
	_PlayerInputComponent->BindAction("Grapple", IE_Released, this, &APlayer_CPP::GrappleDeactivate);

	_PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &APlayer_CPP::DashForward);

	_PlayerInputComponent->BindAxis("MoveForward", this, &APlayer_CPP::MoveForward);
	_PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_CPP::MoveRight);	

	_PlayerInputComponent->BindAxis("LookTurn", this, &APlayer_CPP::LookTurn);
	_PlayerInputComponent->BindAxis("LookUp", this, &APlayer_CPP::LookUp);

}

//Mouse Look left-right
void APlayer_CPP::LookTurn(float _fScale)
{
	//When moving quickly, slow camera movement
	if ((GetCharacterMovement()->Velocity.Size() > fMaxSpeed[0]) && !GetCharacterMovement()->IsFalling())
	{

		_fScale = FMath::Clamp(_fScale, -fCameraClamp, fCameraClamp);

	}


	APawn::AddControllerYawInput(_fScale);

}

//Mouse Look Up
void APlayer_CPP::LookUp(float _fScale)
{
	//When moving quickly, slow camera movement
	if ((GetCharacterMovement()->Velocity.Size() > fMaxSpeed[0]) && !GetCharacterMovement()->IsFalling())
	{
	
		_fScale = FMath::Clamp(_fScale, -fCameraClamp, fCameraClamp);

	}

	APawn::AddControllerPitchInput(_fScale);
}

//Produce forward and back charadcter movement.
void APlayer_CPP::MoveForward(float _fScale)
{
	if (Controller != nullptr && !bIsReelingIn)
	{
		if (_fScale != 0.0f)
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
}

//Produce left and right character movement.
void APlayer_CPP::MoveRight(float _fScale)
{
	if ((Controller != nullptr) && (_fScale != 0.0f) && !bIsReelingIn)
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
	if (Controller != nullptr && !bIsReelingIn)
	{
		bIsForward = true;
	}
}

//Reset Player movement to default movement parameters if previously sprinting.
void APlayer_CPP::ResetWalkValue()
{
	if (Controller != nullptr)
	{
		bIsForward = false;
		//if (iCurrentSpeed != 0 && !bIsReelingIn && !bHasDashed)
		//{
		//	iCurrentSpeed = 0;
		//	GetCharacterMovement()->MaxAcceleration = fMaxAcceleration[0];
		//	GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[0];
		//	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("%f"), iCurrentSpeed));
		//}
	}
}

//Allow player to jump and double jump.
void APlayer_CPP::Jump()
{
	if (Controller != nullptr && !bIsReelingIn)
	{
		//Check if player hasn't jumped and is not falling
		if (iJumpAmount == 0 && !GetCharacterMovement()->IsFalling())
		{
			ACharacter::Jump();
			iJumpAmount++;
		}
		//Allow player to make a second jump while in the air.
		else if (iJumpAmount < iMaxJumpAmount)
		{
			FVector vJump = FVector(GetCharacterMovement()->Velocity.X, GetCharacterMovement()->Velocity.Y, GetCharacterMovement()->JumpZVelocity);

			GetCharacterMovement()->Launch(vJump);
			iJumpAmount++;
		}
	}
}

//If player has landed, reset jump count to zero.
void APlayer_CPP::Landed(const FHitResult& Hit)
{
	if (Controller != nullptr)
	{

		Super::Landed(Hit);

		iJumpAmount = 0;
	}

}

//Stop jumping
void APlayer_CPP::StopJumping()
{
	if (Controller != nullptr)
	{
		ACharacter::StopJumping();
	}
}

//Called when player changes movement type.
void APlayer_CPP::Sprint()
{
	//Move up speed rank and adjust associated varibles.
	if ((Controller != nullptr) && !bIsReelingIn)
	{
		switch (bIsSprinting)
		{
		case true:
		
			bIsSprinting = false;
			//GetCharacterMovement()->BrakingFrictionFactor = fFriction;
			GetCharacterMovement()->MaxAcceleration = fMaxAcceleration[0];
			GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[0];
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, TEXT("Sprint: False"));
			break;
		case false:
		
			bIsSprinting = true;
			GetCharacterMovement()->BrakingFrictionFactor = 0.1f;
			GetCharacterMovement()->MaxAcceleration = fMaxAcceleration[1];
			GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[1];
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, TEXT("Sprint: True"));
			break;
		}
	}
}
//Stop Sprinting
void APlayer_CPP::StopSprinting()
{

	


}

//Called when player dashes forward quickly.
void APlayer_CPP::DashForward()
{

	if (Controller != nullptr && !bHasDashed && !bIsReelingIn)
	{
		
		FTimerDelegate DashStopDelegate;
		FTimerDelegate DashResetDelegate;
		//Store Players Current Speed before dash.
		vPrevSpeed = GetCharacterMovement()->Velocity.Size();
		//Reset players speed to previous speed
		DashStopDelegate.BindLambda([_vel = vPrevSpeed, _GetCMC = GetCharacterMovement(),_ForwardVec = GetActorForwardVector()]()mutable{

			_GetCMC->Launch(_ForwardVec* _vel);
			
		});
		//Allow player to dash again.
		DashResetDelegate.BindLambda([_HasDashed = &bHasDashed]()mutable{

			
			*_HasDashed = false;
			
		});


		//Launch Player Forward (Dashing)
		GetCharacterMovement()->Launch(GetActorForwardVector() * (fDashSpeed+GetCharacterMovement()->Velocity.Size()));
		//Set Timers for player reset
		GetWorldTimerManager().SetTimer(DashTimer, DashStopDelegate, 0.2f, false);
		bHasDashed = true;
		GetWorldTimerManager().SetTimer(DashResetTimer, DashResetDelegate, fDashCooldown+0.2f, false);
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Test"));
	}
	else if (bIsReelingIn)
	{
		bHasDashed = true;
		fMaxReelDashSpeed = fDashSpeed + GetCharacterMovement()->Velocity.Size();
		fCurrentMaxReelSpeed = &fMaxReelDashSpeed;
		fInitVel = fDashSpeed;
	}

}

void APlayer_CPP::Grapple_OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Find grapple point that has moved in range and add it to aGrapplePoints array
	if (OtherActor->IsValidLowLevelFast())
	{
		if (OtherActor->ActorHasTag(FName("Grapple")))
		{
			aGrapplePoints.Add(OtherActor);
		}
	}
}


void APlayer_CPP::Grapple_OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("Triggered"));
	//Find Grapple point that has moved out of range and remove it from aGrapplePoints array
	if (OtherActor->ActorHasTag(FName("Grapple")) && aGrapplePoints.Find(OtherActor) != INDEX_NONE)
	{
		AGrappleLocation_CPP* SelectedGrapplePoint = Cast<AGrappleLocation_CPP>(OtherActor);


		aGrapplePoints.RemoveAt(aGrapplePoints.Find(OtherActor));

		SelectedGrapplePoint->SetWidgetVisibility(false);

		if (aGrapplePoints.Num() == 0)
		{
			aSelectedGrapplePoint = nullptr;
		}
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Deleted"));
	}


}


//Grapple Mechanic Start
void APlayer_CPP::GrappleActivate()
{
	
	if (aSelectedGrapplePoint != nullptr)
	{
		if (PlayerController->ProjectWorldLocationToScreen(aSelectedGrapplePoint->GetActorLocation(), v2d))
		{
			if (bGrappleFlipFlop)
			{
				FTimerDelegate GrappleLoopDelegate;
				fInitVel = GetCharacterMovement()->Velocity.Size();
				
				GetCharacterMovement()->MovementMode = EMovementMode::MOVE_Flying;

				fCurrentMaxReelSpeed = &fMaxSpeed[1];
				//Reels Player to Grapple Point
				GrappleLoopDelegate.BindLambda([_CurrentMinSpeed = &fMaxSpeed[0],_CurrentMaxSpeed = fCurrentMaxReelSpeed,_InitVel = &fInitVel, _IsReelingIn = &bIsReelingIn, _Self = this,
					_GCM = GetCharacterMovement(), _GrapplePoint = aSelectedGrapplePoint]()mutable
				{	
					//Get Direction Vector between player and Grapple Location
					FVector vDistance = UKismetMathLibrary::GetDirectionUnitVector(_Self->GetActorLocation(), _GrapplePoint->GetActorLocation());
					//Accelerate Velocity
					*_InitVel += 100;
					//Set Player Velocity
					_GCM->Velocity = (vDistance * FMath::Clamp(*_InitVel, *_CurrentMinSpeed, *_CurrentMaxSpeed));
				
					//Stop Player Reeling in when reached grapple location.
					if (_Self->GetActorLocation().Equals( _GrapplePoint->GetActorLocation(), 100.f))
					{
						_Self->GrappleDeactivate();
					}
				
				});
				bIsReelingIn = true;
				
				iJumpAmount = 0;
				//Start Reel In.
				GetWorldTimerManager().SetTimer(GrappleTimer, GrappleLoopDelegate, 0.01f, true);
				//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Triggered"));
				bGrappleFlipFlop = false;
			}
		}
	}
}

//Grapple Mechanic End
void APlayer_CPP::GrappleDeactivate()
{
	//Resets values
	if (bIsReelingIn && !bGrappleFlipFlop)
	{
		//Give Player slight boost at end of grapple
		FVector vDistance = UKismetMathLibrary::GetDirectionUnitVector(this->GetActorLocation(), aSelectedGrapplePoint->GetActorLocation());
		GetCharacterMovement()->Velocity = FVector(0.f);
		if (bHasDashed)
		{
			GetCharacterMovement()->Launch(vDistance * (fMaxSpeed[1] * 0.5));
			bHasDashed = false;
		}
		else
		{
			GetCharacterMovement()->Launch(vDistance * (fMaxSpeed[0] * 0.5));
		}
		GetCharacterMovement()->MovementMode = EMovementMode::MOVE_Walking;
		//Stop Timer
		GetWorldTimerManager().ClearTimer(GrappleTimer);
		//Widget Visibility
		AGrappleLocation_CPP* SelectedGrapplePoint = Cast<AGrappleLocation_CPP>(aSelectedGrapplePoint);
		SelectedGrapplePoint->SetWidgetVisibility(false);
		aSelectedGrapplePoint = nullptr;
		bIsReelingIn = false;
	}
	bGrappleFlipFlop = true;
}