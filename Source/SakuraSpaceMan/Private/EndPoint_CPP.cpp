// Fill out your copyright notice in the Description page of Project Settings.


#include "EndPoint_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"


// Sets default values
AEndPoint_CPP::AEndPoint_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AEndPoint_CPP::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AEndPoint_CPP::OnOverlapEnd);

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

void AEndPoint_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag(TEXT("Player")))
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Player Collides");
	}


}

void AEndPoint_CPP::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Overlap End");
}