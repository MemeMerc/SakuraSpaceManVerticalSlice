// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCollectable_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"

// Sets default values
ABasicCollectable_CPP::ABasicCollectable_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetGenerateOverlapEvents(true);
	RootComponent = Mesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComonent"));
	CollisionBox->SetupAttachment(Mesh);
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABasicCollectable_CPP::OnOverlapBegin);
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ABasicCollectable_CPP::MeshOverlapBegin);
	
}

// Called when the game starts or when spawned
void ABasicCollectable_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
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

		CurrentLocation += Direction * fSpeed * DeltaTime;

		// Move Actor.
		SetActorLocation(CurrentLocation);


	}

}

void ABasicCollectable_CPP::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherComp->ComponentHasTag("Player"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Player Collides");
		Target = OtherComp->GetAttachmentRootActor();
	}
}

void ABasicCollectable_CPP::MeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherComp->ComponentHasTag("Player"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Destroy Collictable");

		// Do stuff here to "Collect" it.

		Destroy();
		
	}
}
