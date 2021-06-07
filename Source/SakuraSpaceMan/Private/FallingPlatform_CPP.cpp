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

	// Create mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	// Create a collision box
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AFallingPlatform_CPP::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AFallingPlatform_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFallingPlatform_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFallingPlatform_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Falling Platform");


	if (OtherComp->ComponentHasTag("Player"))
	{
		
	}

}