// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathBox_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADeathBox_CPP::ADeathBox_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Create a collision box
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	// Bind collision function.
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADeathBox_CPP::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ADeathBox_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathBox_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Overlap event that checks if the overlaped actor is the player, this function then calls to game mode to respawn the player.
void ADeathBox_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if it was the player that was overlaping
	if (OtherComp->ComponentHasTag("Player"))
	{
		// Check if the game mode has been found.
		if (GameMode == nullptr)
		{
			// Cast to the game mode in this world.
			GameMode = Cast<ASakuraSpaceManGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
		}

		// Call the respawn function from gamemode, and pass in the player charater.
		GameMode->Respawn(OtherActor);
	}

}

