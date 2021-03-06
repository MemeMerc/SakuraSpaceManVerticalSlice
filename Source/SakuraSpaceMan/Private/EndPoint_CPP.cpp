// Fill out your copyright notice in the Description page of Project Settings.


#include "EndPoint_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"
#include "Blueprint/UserWidget.h"

// Sets default values
AEndPoint_CPP::AEndPoint_CPP()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creaete a mesh component for this actor.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	// Create a collision box for this actor.
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	// Bind collision functions to the collision box.
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AEndPoint_CPP::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AEndPoint_CPP::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEndPoint_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Overlap event that checks if the player is overlaping, if true it creates the gameover widget and adds it to the screen.
void AEndPoint_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check that the player is overlaping.
	if (OtherComp->ComponentHasTag(TEXT("Player")))
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Player Collides");
	
		// Check that it can find the widget class and that it can find the world.
		if (GameOver_WidClass != nullptr && GetWorld() != nullptr)
		{
			// Create the widget from the class provided.
			GameOver_Wid = CreateWidget<UUserWidget>(GetWorld(), GameOver_WidClass);
			// Add widget to viewport.
			GameOver_Wid->AddToViewport();
		}
	}


}