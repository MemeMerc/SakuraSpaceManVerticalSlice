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

	// Create the mesh for this object.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	// Create the collision box for thus object.
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	// Set the deafult target to target one.
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

	// Get this objects current location to use for movement.
	CurrentLocation = GetActorLocation();

	// Check if this platform has reached location one or two and if so toggle betwen the them.
	if (CurrentLocation == LocationOne)
	{
		TargetLocation = LocationTwo;
	}
	else
	{
		TargetLocation = LocationOne;
	}

	// Move this actor to a point between its current location and its target location.
	SetActorLocation(FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, InterpSpeed));
}

