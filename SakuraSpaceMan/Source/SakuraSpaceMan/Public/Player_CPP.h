// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API APlayer_CPP : public ACharacter
{
	GENERATED_BODY()


	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

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

	void ResetWalkValue();

	void LookTurn(float _fScale);
	void LookUp(float _fScale);

	

	//VARIABLES
	

	int iCurrentSpeed = 0;

	bool bIsSprinting = false;

	bool bIsRunning = false;
	bool bRunDoOnce = true;

	int iJumpAmount = 1;
	
	//Running
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fMaxSprintSpeed = 6000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fMaxWalkSpeed = 1500.0f;
	//Ground Friction
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fFriction = 1.8f;
	//Camera Turn Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fCameraClamp = 0.3f;
	//Acceleration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fDefaultAcceleration = 2024.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	float fRunAcceleration = 1000.f;
	//Jump Amount (Double Jump)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerMovement, meta = (AllowPrivateAccess = "true"))
	int iMaxJumpAmount = 2;


private:


};
