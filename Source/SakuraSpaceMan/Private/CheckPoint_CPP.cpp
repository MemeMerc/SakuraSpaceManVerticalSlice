// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"

// Sets default values
ACheckPoint_CPP::ACheckPoint_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a box collider.
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	RootComponent = CollisionBox;
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
}

// Called when the game starts or when spawned
void ACheckPoint_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckPoint_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckPoint_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp->ComponentHasTag("Player"))
	{
		RespawnPoint = OtherComp->GetAttachmentRootActor()->GetActorLocation();

		// Cast to somthing to save players Location.
	}
		
}
