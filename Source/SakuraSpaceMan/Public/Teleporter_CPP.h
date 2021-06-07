// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Teleporter_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API ATeleporter_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties.
	ATeleporter_CPP();

	// Called every frame.
	virtual void Tick(float DeltaTime) override;

	// Set mesh for first Teleporter.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* TeleporterOneMesh;

	// Set mesh for second Teleporter.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* TeleporterTwoMesh;

	// Set Box Collision of first mesh.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* TeleporterOneCollisionBox;

	// Set Box Collision of sceond mesh.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* TeleporterTwoCollisionBox;

	// Delay between teleports.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float fDelayTime = 2.f;

	// Collison function for teleporter one.
	UFUNCTION()
	void OnOverlapBeginTeleporterOne(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Collison function for teleporter Two.
	UFUNCTION()
	void OnOverlapBeginTeleporterTwo(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Set bCanTeleport to trues
	UFUNCTION()
	void ActivateTeleporter();

protected:
	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Init Teleport Locations.
	USceneComponent* TeleporterOnelocation;
	USceneComponent* TeleporterTwolocation;

	bool bCanTeleport;

	// TimerHandle
	FTimerHandle TeleportTimerHandle;
};
