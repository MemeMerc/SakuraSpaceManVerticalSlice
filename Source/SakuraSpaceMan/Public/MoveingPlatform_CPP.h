// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveingPlatform_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API AMoveingPlatform_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveingPlatform_CPP();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Set mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Mesh;

	// Set Box Collision
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Meta = (MakeEditWidget = true))
	FVector LocationOne;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Meta = (MakeEditWidget = true))
	FVector LocationTwo;

	UPROPERTY(EditAnywhere)
	float InterpSpeed = 50;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector TargetLocation;
	FVector CurrentLocation;

};
