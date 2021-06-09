// Fill out your copyright notice in the Description page of Project Settings.
//Player was created and coded by Lucas Mcalpine 
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API APlayer_CPP : public ACharacter
{
	GENERATED_BODY()


	// Camera boom positioning the camera behind the character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	// Follow camera 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;
	// Grapple Range Sphere Collision
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grapple, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* GrappleCollisionSphere;

public:
	// Sets default values for this character's properties
	APlayer_CPP();

	// Called every frame
	virtual void Tick(float _fDeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* _PlayerInputComponent) override;

	virtual void Landed(const FHitResult& Hit) override;

	
	
protected:

	
	//FUNCTIONS

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Moving forward/back (W,S)
	void MoveForward(float _fScale);

	// Moving side to side (A,D)
	void MoveRight(float _fScale);
	
	//Player Jump
	void Jump();
	void StopJumping();

	//Set Sprinting Speeds
	void Sprint();
	void StopSprinting();

	void CheckWalkForward();
	void ResetWalkValue();

	//Camera
	void LookTurn(float _fScale);
	void LookUp(float _fScale);

	//Dash
	void DashForward();


	//Grapple Mechanics
	UFUNCTION(BlueprintCallable, Category = Properties)
	void Grapple_OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = Properties)
	void Grapple_OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void GrappleActivate();
	
	void GrappleDeactivate();

	float FindDistanceToCenterScreen(AActor* _aActor);

	UFUNCTION(BlueprintCallable, Category = Properties)
	AActor* ReturnGrapple()
	{
		return(aSelectedGrapplePoint);
	}
	//VARIABLES


	//int iCurrentSpeed = 0;	//Current Speed Stage// 0 = Walking // 1+ higher stages of Speed

	bool bIsSprinting;	//Is Using the Sprint Function.

	bool bIsMoving;		//Is Moving In A Direction.

	bool bIsForward;	//Has Pressed the Move Forward Key (W)
	
	bool bIsGrappleArrayEmpty;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	bool bIsReelingIn; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))

	bool bIsBoosting;



	int iJumpAmount;	//Number of Jumps Made.
	
	float fLocalDeltaTime;

	float fGravityScale;
	float fGlideGravityScale;

	//Ground Friction
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fFriction;		//Ground Friction
	//Camera Turn Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fCameraClamp;	//Camera Move Friction
	//Jump Amount (Double Jump)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	int iMaxJumpAmount;		//Maximum Jump Count

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	TArray<float> fMaxSpeed;	//Uses iCurrentSpeed variable to iterate through Max Speeds.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	TArray<float> fMaxAcceleration;		//Uses iCurrentSpeed variable to iterate through Max Accelerations.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fDashSpeed;			//Dash Speed modifier
	float vPrevSpeed;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fDashCooldown;		//seconds
	bool bHasDashed;

	FTimerHandle DashTimer;
	FTimerHandle DashResetTimer;
	FTimerHandle GrappleTimer;
	
	
	TArray<AActor*> aGrapplePoints;
	
	AActor* aSelectedGrapplePoint;

	float *fCurrentMaxReelSpeed;
	float fMaxReelDashSpeed;

	float fInitVel;
	FVector LaunchVector;
	bool bGrappleFlipFlop;

	FVector2D v2d = FVector2D(0.f);

	APlayerController* PlayerController;

private:


};
