// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACheckPoint_CPP::ACheckPoint_CPP()
{
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

	// Bind the collisin function 
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACheckPoint_CPP::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ACheckPoint_CPP::BeginPlay()
{
	Super::BeginPlay();

	// Check that game mode is a null ptr.
	if (GameMode == nullptr)
	{
		// Cast to gamemode
		GameMode = Cast<ASakuraSpaceManGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	}
}

// Called every frame
void ACheckPoint_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Overlap event that checks if the player has collided with this box component. This then saves the players location for incase the player needs to respawn.
void ACheckPoint_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if the player has overlaped with this.
	if (OtherComp->ComponentHasTag("Player"))
	{
		// Check that a gamemode was found.
		if (GameMode != nullptr)
		{
			// Pass respawn location to game mode to store.
			FTransform TransLocation = RespawnLocation * Mesh->GetRelativeTransform();
			GameMode->SetRespawnLocation(TransLocation.GetLocation());

		}
	}
	
}
