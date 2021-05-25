// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveingPlatform_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AMoveingPlatform_CPP::AMoveingPlatform_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	TargetLocation = LocationOne;
}

// Called when the game starts or when spawned
void AMoveingPlatform_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveingPlatform_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CurrentLocation = GetActorLocation();

	if (CurrentLocation == LocationOne)
	{
		TargetLocation = LocationTwo;
	}
	else
	{
		TargetLocation = LocationOne;
	}

	SetActorLocation(FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, InterpSpeed));

}
