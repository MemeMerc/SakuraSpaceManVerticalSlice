// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FallingPlatform_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API AFallingPlatform_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFallingPlatform_CPP();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float fDelayTime = 2.f;

	UPROPERTY(EditAnywhere)
	float fResetTime = 2.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Set mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	// Set Box Collision
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	FVector PlatformLocation;

	// TimerHandle
	FTimerHandle FallingTimerHandle;
	FTimerHandle ResetTimerHandle;

	//Functions

	void PlatformFall();
	void PlatformReset();

	// Collison function
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
