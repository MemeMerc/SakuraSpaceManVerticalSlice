// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicCollectable_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API ABasicCollectable_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicCollectable_CPP();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Speed To Move At.
	UPROPERTY(EditAnywhere, Category = "Move To")
	float fSpeed = 10.f;

	// Points fr collecting.
	UPROPERTY(EditAnywhere)
	float fPoints = 100.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Set mesh.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	// Set Box Collision.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	// Target To follow.
	UPROPERTY(VisibleAnywhere, Category = "Move To")
	class AActor* Target;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<class UCollectableWid_CPP> Collectable_WidClass;

	class UCollectableWid_CPP* Collectable_Wid;

	// Set Sound.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USoundCue* Sound;

	// Init direction and current location of this object.
	FVector Direction;
	FVector CurrentLocation;

	// CollisionBox overlap function.
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Mesh overlap function.
	UFUNCTION()
		void MeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
