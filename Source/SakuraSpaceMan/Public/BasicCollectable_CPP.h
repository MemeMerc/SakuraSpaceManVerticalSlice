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

	// Set mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	// Set Box Collision
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	// Target To follow.
	UPROPERTY(EditAnywhere, Category = "Move To")
	//class UPrimitiveComponent* Target;
	class AActor* Target;

	// Speed To Move At.
	UPROPERTY(EditAnywhere, Category = "Move To")
	float fSpeed = 10.f;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void MeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector Direction;
	FVector CurrentLocation;
};
