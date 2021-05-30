// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CheckPoint_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API ACheckPoint_CPP : public AActor
{
	GENERATED_BODY()

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Set Box Collision
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
public:	
	// Sets default values for this actor's properties
	ACheckPoint_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector RespawnPoint;

};
