// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCollectable_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"
#include "Kismet/GameplayStatics.h"
#include "SakuraSpaceManGameModeBase.h"
#include "CollectableWid_CPP.h"

// Sets default values
ABasicCollectable_CPP::ABasicCollectable_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create mesh for collectable.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	// Allow for the mesh to have overlap events.
	Mesh->SetGenerateOverlapEvents(true);
	RootComponent = Mesh;

	// Set a collision box for the collectable.
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	// Bind the collision functions.
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABasicCollectable_CPP::OnOverlapBegin);
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ABasicCollectable_CPP::MeshOverlapBegin);
	
}

// Called when the game starts or when spawned.
void ABasicCollectable_CPP::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame.
void ABasicCollectable_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Target != nullptr)
	{
		CurrentLocation = GetActorLocation();

		// Find Direction to move to
		//Direction = Target->GetComponentLocation() - CurrentLocation;
		Direction = Target->GetActorLocation() - CurrentLocation;
		Direction = Direction.GetSafeNormal();

		// Get directon to move to.
		CurrentLocation += Direction * fSpeed * DeltaTime;

		// Move Actor to target.
		SetActorLocation(CurrentLocation);
	}

}

// Checks if the player has overlaped with this collision box, if true set the player as the target to move too.
void ABasicCollectable_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherComp->ComponentHasTag("Player"))
	{
		// Set this actor as the target.
		Target = OtherComp->GetAttachmentRootActor();
	}
}

// Checks if the mesh has overlaped with the player, if true the player collects this item.
void ABasicCollectable_CPP::MeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if the player overlapped this object.
	if (OtherComp->ComponentHasTag("Player"))
	{
		// Check if world can be found.
		if (GetWorld() != nullptr)
		{
			if (Collectable_WidClass != nullptr)
			{
				// Create the widget from the class provided.
				Collectable_Wid = CreateWidget<UCollectableWid_CPP>(GetWorld(), Collectable_WidClass);

				// Cast to playerControler to covert this actors location to screen space.
				const APlayerController* const PlayerController = GetWorld()->GetFirstPlayerController();
				// Check if PlayerController was found.
				if (PlayerController != nullptr)
				{
					// Get Postion of this actor in screen space.
					FVector2D WidPosition;
					PlayerController->ProjectWorldLocationToScreen(this->GetActorLocation(), WidPosition, true);

					// Set widget location to actors location.
					Collectable_Wid->SetPositionInViewport(WidPosition);
					Collectable_Wid->InitWidget(WidPosition, fPoints);
					// Add widget to viewport.
					Collectable_Wid->AddToViewport();
				}
			}
		}

		// Destory this instance.
		Destroy();
		
	}
}
