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

protected:
	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Set mesh for first Teleporter.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* TeleporterMesh_One;

	// Set mesh for second Teleporter.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* TeleporterMesh_Two;

	// Set Box Collision of first mesh.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* TeleporterCollisionBox_One;

	// Set Box Collision of sceond mesh.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* TeleporterCollisionBox_Two;

	// Delay between teleports.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float fDelayTime = 2.f;

	// Init Teleport Locations.
	USceneComponent* Teleporterlocation_One;
	USceneComponent* Teleporterlocation_Two;

	bool bCanTeleport;

	// TimerHandle for teleporting.
	FTimerHandle TeleportTimerHandle;

	// Collison function for teleporter one.
	UFUNCTION()
	void OnOverlapBeginTeleporterOne(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Collison function for teleporter Two.
	UFUNCTION()
	void OnOverlapBeginTeleporterTwo(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Set bCanTeleport to trues.
	UFUNCTION()
	void ActivateTeleporter();
};
