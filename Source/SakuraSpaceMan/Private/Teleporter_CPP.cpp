// Fill out your copyright notice in the Description page of Project Settings.


#include "Teleporter_CPP.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "UObject/UObjectBaseUtility.h"

// Sets default values
ATeleporter_CPP::ATeleporter_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create deafult sceene root.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

	TeleporterOnelocation = CreateDefaultSubobject<USceneComponent>(TEXT("TeleporterOnelocation"));
	TeleporterTwolocation = CreateDefaultSubobject<USceneComponent>(TEXT("TeleporterTwolocation"));

	// Set up meshes.
	TeleporterOneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleporterOneMesh"));
	TeleporterTwoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleporterTwoMesh"));

	TeleporterOneMesh->SetupAttachment(RootComponent);
	TeleporterTwoMesh->SetupAttachment(RootComponent);

	// Location to teleport too.
	TeleporterOnelocation->SetupAttachment(TeleporterOneMesh);
	TeleporterTwolocation->SetupAttachment(TeleporterTwoMesh);

	// Set teleporter one collision box.
	TeleporterOneCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleporterOneCollisionBox"));
	TeleporterOneCollisionBox->SetupAttachment(TeleporterOneMesh);
	TeleporterOneCollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	TeleporterOneCollisionBox->SetCollisionProfileName("TeleporterOneTrigger");

	// Set teleporter two collision box.
	TeleporterTwoCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleporterTwoCollisionBox"));
	TeleporterTwoCollisionBox->SetupAttachment(TeleporterTwoMesh);
	TeleporterTwoCollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	TeleporterTwoCollisionBox->SetCollisionProfileName("TeleporterTwoTrigger");

	//TeleporterOneLocation = 
	//TeleporterTwoLocation = TeleporterTwoMesh->GetRelativeLocation();

	TeleporterOneCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter_CPP::OnOverlapBeginTeleporterOne);
	TeleporterTwoCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ATeleporter_CPP::OnOverlapBeginTeleporterTwo);

	bCanTeleport = true;
}

// Called when the game starts or when spawned
void ATeleporter_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeleporter_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeleporter_CPP::OnOverlapBeginTeleporterOne(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp->ComponentHasTag("Player") && bCanTeleport)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Player Collides One");
		bCanTeleport = false;
		OtherComp->GetAttachmentRootActor()->SetActorLocation(TeleporterTwolocation->GetComponentLocation());
		
	}
}

void ATeleporter_CPP::OnOverlapBeginTeleporterTwo(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp->ComponentHasTag("Player") && bCanTeleport)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Player Collides Two");
		bCanTeleport = false;
		OtherComp->GetAttachmentRootActor()->SetActorLocation(TeleporterOnelocation->GetComponentLocation());
		
	}

	
}