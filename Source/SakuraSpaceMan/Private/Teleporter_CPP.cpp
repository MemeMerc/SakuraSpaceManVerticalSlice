// Fill out your copyright notice in the Description page of Project Settings.


#include "Teleporter_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"

// Sets default values
ATeleporter_CPP::ATeleporter_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create deafult sceene root.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

	// Set the teleport locations.
	Teleporterlocation_One = CreateDefaultSubobject<USceneComponent>(TEXT("Teleporterlocation_One"));
	Teleporterlocation_Two = CreateDefaultSubobject<USceneComponent>(TEXT("Teleporterlocation_Two"));

	// Set up meshes.
	TeleporterMesh_One = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleporterMesh_One"));
	TeleporterMesh_Two = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleporterMesh_Two"));

	// Attach the meshes the the root component.
	TeleporterMesh_One->SetupAttachment(RootComponent);
	TeleporterMesh_Two->SetupAttachment(RootComponent);

	// bind location to teleport too to its teleporter mesh.
	Teleporterlocation_One->SetupAttachment(TeleporterMesh_One);
	Teleporterlocation_Two->SetupAttachment(TeleporterMesh_Two);

	// Set teleporter one collision box.
	TeleporterCollisionBox_One = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleporterCollisionBox_One"));
	TeleporterCollisionBox_One->SetupAttachment(TeleporterMesh_One);
	TeleporterCollisionBox_One->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	TeleporterCollisionBox_One->SetCollisionProfileName("TeleporterTrigger_One");

	// Set teleporter two collision box.
	TeleporterCollisionBox_Two = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleporterCollisionBox_Two"));
	TeleporterCollisionBox_Two->SetupAttachment(TeleporterMesh_Two);
	TeleporterCollisionBox_Two->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	TeleporterCollisionBox_Two->SetCollisionProfileName("TeleporterTrigger_Two");

	// Bind collision functions to the collision boxes.
	TeleporterCollisionBox_One->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter_CPP::OnOverlapBeginTeleporterOne);
	TeleporterCollisionBox_Two->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter_CPP::OnOverlapBeginTeleporterTwo);

	// Set can telport to be true by deafult.
	bCanTeleport = true;

}

// Called when the game starts or when spawned
void ATeleporter_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeleporter_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Checks if the player in colliding with teleporter one, and if bCanTeleport is true, sends them to teleporter two and starts the cool down timer. 
void ATeleporter_CPP::OnOverlapBeginTeleporterOne(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checks if the player is overlaping and that bCanTeleport is true.
	if (OtherComp->ComponentHasTag("Player") && bCanTeleport)
	{
		// Sets bCanTeleport to false.
		bCanTeleport = false;

		// Change Players location.
		OtherComp->GetAttachmentRootActor()->SetActorLocation(Teleporterlocation_Two->GetComponentLocation());

		// Start Timer, so the player isn't pinging back and foward between the two teleporter locations.
		GetWorld()->GetTimerManager().SetTimer(TeleportTimerHandle, this, &ATeleporter_CPP::ActivateTeleporter, fDelayTime, false);	
	}
}

// Checks if the player in colliding with teleporter Two, and if bCanTeleport is true, sends them to teleporter one and starts the cool down timer. 
void ATeleporter_CPP::OnOverlapBeginTeleporterTwo(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp->ComponentHasTag("Player") && bCanTeleport)
	{
		// Sets bCanTeleport to false.
		bCanTeleport = false;

		// Change Players location.
		OtherComp->GetAttachmentRootActor()->SetActorLocation(Teleporterlocation_One->GetComponentLocation());
		
		// Start Timer, so the player isn't pinging back and foward between the two teleporter locations.
		GetWorld()->GetTimerManager().SetTimer(TeleportTimerHandle, this, &ATeleporter_CPP::ActivateTeleporter, fDelayTime, false);
	}
}

// Clears telport timer and sets bCanTeleport to true.
void ATeleporter_CPP::ActivateTeleporter()
{
	// Clears timer.
	GetWorld()->GetTimerManager().ClearTimer(TeleportTimerHandle);

	// Set bCanTeleport to true.
	bCanTeleport = true;
}