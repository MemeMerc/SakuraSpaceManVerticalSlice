// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"
<<<<<<< HEAD
=======
#include "Kismet/GameplayStatics.h"
>>>>>>> main

// Sets default values
ACheckPoint_CPP::ACheckPoint_CPP()
{
<<<<<<< HEAD
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a box collider.
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	RootComponent = CollisionBox;
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
=======
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	// Create a collision box
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACheckPoint_CPP::OnOverlapBegin);
>>>>>>> main
}

// Called when the game starts or when spawned
void ACheckPoint_CPP::BeginPlay()
{
	Super::BeginPlay();
	
<<<<<<< HEAD
=======
	if (GameMode == nullptr)
	{
		// Cast to gamemode
		GameMode = Cast<ASakuraSpaceManGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	}
>>>>>>> main
}

// Called every frame
void ACheckPoint_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckPoint_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
<<<<<<< HEAD
	if (OtherComp->ComponentHasTag("Player"))
	{
		RespawnPoint = OtherComp->GetAttachmentRootActor()->GetActorLocation();

		// Cast to somthing to save players Location.
	}
		
=======

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "CheckPoint");


	if (OtherComp->ComponentHasTag("Player"))
	{
		// Set new respawn location.
		RespawnLocation = OtherComp->GetAttachmentRootActor()->GetActorLocation();

		// Check that a gamemode was found.
		if (GameMode != nullptr)
		{
			// Pass respawn location to game mode to store.
			GameMode->SetRespawnLocation(RespawnLocation);
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, RespawnLocation.ToString());
		}
	}
	
>>>>>>> main
}
