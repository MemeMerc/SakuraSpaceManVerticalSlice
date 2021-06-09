// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SakuraSpaceManGameModeBase.h"
#include "GameFramework/Actor.h"
#include "DeathBox_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API ADeathBox_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADeathBox_CPP();

	// Called every frame.
	virtual void Tick(float DeltaTime) override;

	// Init Box Collision.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	// Collison function
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Init game mode.
	ASakuraSpaceManGameModeBase* GameMode;
};
