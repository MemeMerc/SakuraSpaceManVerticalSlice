// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectible_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"
#include "Components/SceneComponent.h"

// Sets default values
ACollectible_CPP::ACollectible_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACollectible_CPP::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ACollectible_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectible_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Target != nullptr)
	{
		FVector Location = GetActorLocation();
		FVector Direction = Target->GetComponentLocatio() - Location;
		Direction = Direction.GetSafeNormal();

		Location += Direction * Speed * DeltaTime;

		SetActorLocation(Location);

	}

}

void ACollectible_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{


}

