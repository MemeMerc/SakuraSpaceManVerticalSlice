// Fill out your copyright notice in the Description page of Project Settings.


#include "FallingPlatform_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"


// Sets default values
AFallingPlatform_CPP::AFallingPlatform_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create mesh.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	// Create a collision box.
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	// Bind collision funcion.
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AFallingPlatform_CPP::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AFallingPlatform_CPP::BeginPlay()
{
	Super::BeginPlay();

	// Save this platforms location to reset it after it falls.
	PlatformLocation = this->GetActorLocation();
	
}

// Called every frame
void AFallingPlatform_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Checks if the player overlaped, if true starts a timer to drop the platform.
void AFallingPlatform_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if it was the player that overlaped.
	if (OtherComp->ComponentHasTag("Player"))
	{
		// Start Timer, that calls the function for the platfrom to drop.
		GetWorld()->GetTimerManager().SetTimer(FallingTimerHandle, this, &AFallingPlatform_CPP::PlatformFall, fDelayTime, false);
	}
}

// Clears the FallingTimerHandle and enables gravity and physics for this object, while locking all rotation.
void AFallingPlatform_CPP::PlatformFall()
{
	// Clear timer.
	GetWorld()->GetTimerManager().ClearTimer(FallingTimerHandle);

	// Enable gravity and physics so the object can fall.
	Mesh->SetEnableGravity(true);
	Mesh->SetSimulatePhysics(true);

	// Lock rotation.
	Mesh->BodyInstance.bLockXRotation = false;
	Mesh->BodyInstance.bLockYRotation = false;
	Mesh->BodyInstance.bLockZRotation = false;

	// Start timer to reset the platform to is orignal location.
	GetWorld()->GetTimerManager().SetTimer(ResetTimerHandle, this, &AFallingPlatform_CPP::PlatformReset, fResetTime, false);
}

// Clears the ResetTimerHandle, and disables gravity and physics for this object. This fucnction also resets this object to is original location.
void AFallingPlatform_CPP::PlatformReset()
{
	// Clear timer.
	GetWorld()->GetTimerManager().ClearTimer(ResetTimerHandle);

	// Dispable gravity and physics so the object dosent fall.
	Mesh->SetEnableGravity(false);
	Mesh->SetSimulatePhysics(false);

	// Set the Location to is original location.
	this->SetActorLocation(PlatformLocation);
}