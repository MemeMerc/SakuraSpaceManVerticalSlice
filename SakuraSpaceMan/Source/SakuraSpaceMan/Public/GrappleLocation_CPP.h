// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GrappleLocation_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API AGrappleLocation_CPP : public AActor
{
	GENERATED_BODY()


	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grapple, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* SphereGrappleLocation;




public:	
	// Sets default values for this actor's properties
	AGrappleLocation_CPP();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	

};
