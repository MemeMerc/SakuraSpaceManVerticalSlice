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
#include "Sound/SoundCue.h"
#include "SakuraSpaceManGameModeBase.h"

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

	//Initiate Variables

	bIsSprinting = false;	
	bIsMoving = false;		 
	bIsForward = false;	
	bIsGrappleArrayEmpty = true;
	bIsReelingIn = false;
	bIsBoosting = false;
	bIsGliding = false;
	iJumpAmount = 0;
	bIsJumping = false;
	bGlideSoundPlayed = false;

	fFriction = 0.5f;

	fCameraClamp = 0.8f;

	iMaxJumpAmount = 2;


	fPrevSpeed = 0;


	fInitVel = 0;

	bGrappleFlipFlop = true;

	//Define Movement Stages

	//Platforming Mode
	fMaxSpeed.Add(1300.f);
	fMaxAcceleration.Add(2024.f);

	//Sprinting Mode
	fMaxSpeed.Add(4000.f);
	fMaxAcceleration.Add(800.f);

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 900.f;
	GetCharacterMovement()->AirControl = 1.f;
	GetCharacterMovement()->BrakingFrictionFactor = fFriction;
	GetCharacterMovement()->GravityScale = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[0];
	GetCharacterMovement()->JumpZVelocity = 1300;
	fGravityScale = GetCharacterMovement()->GravityScale;

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

	// Cast to gameMode to set respawn location at the start.
	ASakuraSpaceManGameModeBase* GameMode = Cast<ASakuraSpaceManGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	GameMode->SetRespawnLocation(GetActorLocation());

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

	if (bIsBoosting && (GetCharacterMovement()->Velocity.Size() < fMaxSpeed[1]))
	{
		
		//Change between Speed Types.
		GetCharacterMovement()->MaxWalkSpeed = (bIsSprinting) ? fMaxSpeed[1] : fMaxSpeed[0];

		bIsBoosting = false;
	}


	//Allow Gliding if player is falling and sprinting
	if (GetCharacterMovement()->IsFalling())
	{
		if (bIsSprinting && PlayerFallingDown())
		{
			ActivateGlide();
		}
		else
		{
			StopGlideSound();
			bGlideSoundPlayed = false;
		}
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
	//More commenting
	AGrappleLocation_CPP* GrapplePoint = Cast<AGrappleLocation_CPP>(_aActor);
	PlayerController->GetViewportSize(iViewportX, iViewportY);
	vViewportDimensions = FVector2D(iViewportX, iViewportY);
	PlayerController->ProjectWorldLocationToScreen(GrapplePoint->GetActorLocation(), *GrapplePoint->GetScreenLoc());

	vResultVector = (vViewportDimensions *0.5f) - *GrapplePoint->GetScreenLoc();
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

	_PlayerInputComponent->BindAction("Reset", IE_Pressed, this, &APlayer_CPP::ResetPlayer);

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
	if (Controller != nullptr && !bIsReelingIn && !bIsGrinding)
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
	if ((Controller != nullptr) && (_fScale != 0.0f) && !bIsReelingIn && !bIsGrinding)
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
		if (GetCharacterMovement()->MaxWalkSpeed > fMaxSpeed[1] && !bIsReelingIn)
		{
			//Change between Speed Types.
			GetCharacterMovement()->MaxWalkSpeed = (bIsSprinting) ? fMaxSpeed[1] : fMaxSpeed[0];
		}
	}
}

//Allow player to jump and double jump.
void APlayer_CPP::Jump()
{
	if (Controller != nullptr && !bIsReelingIn && !bIsGrinding && iJumpAmount < iMaxJumpAmount)
	{
		DeactivateGlide();
		fPrevSpeed = GetCharacterMovement()->Velocity.Size();
		//Creates Launch Vector to allow player to jump
		FVector vJump = FVector(this->GetActorForwardVector().X * GetCharacterMovement()->Velocity.Size() * 0.8f,
								this->GetActorForwardVector().Y * GetCharacterMovement()->Velocity.Size() * 0.8f,
								GetCharacterMovement()->JumpZVelocity);
		
		GetCharacterMovement()->Launch(vJump);
		iJumpAmount++;
		bIsJumping = true;
		
	}
	else if (Controller != nullptr && bIsGrinding)
	{
		JumpOffRail();
		iJumpAmount = 0;
	}
		
}

//If player has landed, reset jump count to zero.
void APlayer_CPP::Landed(const FHitResult& Hit)
{
	if (Controller != nullptr)
	{
		//Resets player to previous Velocity Size
		if (bIsJumping && bIsSprinting && GetCharacterMovement()->Velocity.Size() < fPrevSpeed)
		{
			GetCharacterMovement()->Velocity = FVector(this->GetActorForwardVector().X * fPrevSpeed, this->GetActorForwardVector().Y * fPrevSpeed, 0.f);
		}
		Super::Landed(Hit);				   		
		
		iJumpAmount = 0;
		bIsJumping = false;
		DeactivateGlide();
	}

}

//Stop jumping
void APlayer_CPP::StopJumping()
{
	if (Controller != nullptr && !bIsReelingIn)
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
		bIsSprinting = true;
		GetCharacterMovement()->BrakingFrictionFactor = 0.1f;
	
		GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[1];
		
	}
}
//Stop Sprinting
void APlayer_CPP::StopSprinting()
{
	if ((Controller != nullptr) && !bIsReelingIn)
	{
		bIsSprinting = false;
		GetCharacterMovement()->MaxWalkSpeed = fMaxSpeed[0];
		DeactivateGlide();
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
		AGrappleLocation_CPP* SelectedGrapplePoint = Cast<AGrappleLocation_CPP>(aSelectedGrapplePoint);
		FVector vDistance = UKismetMathLibrary::GetDirectionUnitVector(this->GetActorLocation(), aSelectedGrapplePoint->GetActorLocation());
		GetCharacterMovement()->Velocity = FVector(0.f);
		GetCharacterMovement()->MovementMode = EMovementMode::MOVE_Walking;
		//Stop Timer
		GetWorldTimerManager().ClearTimer(GrappleTimer);
		//Widget Visibility
		SelectedGrapplePoint->SetWidgetVisibility(false);
		aSelectedGrapplePoint = nullptr;
		bIsReelingIn = false;
	}
	bGrappleFlipFlop = true;
}


//Returns the current selected grapple point. Blueprint callable event.
AActor* APlayer_CPP::ReturnGrapple()
{
	return(aSelectedGrapplePoint);
}

//Check if player velocity is negative (moving down)
bool APlayer_CPP::PlayerFallingDown()
{
	return(GetCharacterMovement()->Velocity.Z < 0);
}

//Activates Glide Effect
void APlayer_CPP::ActivateGlide()
{
	if (bIsGliding == false)
	{
		//Set Player into Glide State
		GetCharacterMovement()->GravityScale = 1.f;
		bIsGliding = true;
	}
	else if (bIsGliding == true)	
	{
		//Play Glide Sound
		if (GlideSound != nullptr && !bGlideSoundPlayed)
		{
			UGameplayStatics::PlaySound2D(GetWorld(), GlideSound, 0.5f, 1.0f, 0);
			PlayGlideSound();
			bGlideSoundPlayed = true;
		}
		//Move character forward to simulate gliding
		GetCharacterMovement()->Velocity.X += this->GetActorForwardVector().X * 15;// *GetCharacterMovement()->Velocity.Size();
		GetCharacterMovement()->Velocity.Y += this->GetActorForwardVector().Y * 15;// *GetCharacterMovement()->Velocity.Size();

		//Clamp max speed
		GetCharacterMovement()->Velocity = ClampVector(GetCharacterMovement()->Velocity, 0.f, GetCharacterMovement()->GetMaxSpeed()*0.8);
	}

}
//Stop Gliding
void APlayer_CPP::DeactivateGlide()
{
	//Revert Character to default gravity
	if (bIsGliding == true)
	{
		StopGlideSound();
		GetCharacterMovement()->GravityScale = 4.5f;
		bIsGliding = false;
	}

}
//Return Node for Blueprint call
void APlayer_CPP::ClampedVectorSizeReturn(FVector _Vector)
{
	ClampedVector = _Vector;
}
//Call Blueprint function not supplied in C++
FVector APlayer_CPP::ClampVector(FVector _Vector, float _fMin, float _fMax)
{
	ClampedVectorSize(_Vector, _fMin, _fMax);
	return(ClampedVector);
}

// Cast to gamemde and reset player to the last check point.
void APlayer_CPP::ResetPlayer()
{
	// Cast to gameMode to set respawn location at the start.
	ASakuraSpaceManGameModeBase* GameMode = Cast<ASakuraSpaceManGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	// Check that a Gamemode was found.
	if (GameMode != nullptr)
	{
		// Reset to last checkpoint.
		GameMode->Respawn(this);
	}
}