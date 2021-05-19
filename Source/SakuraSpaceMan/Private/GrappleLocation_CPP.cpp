// Fill out your copyright notice in the Description page of Project Settings.


#include "GrappleLocation_CPP.h"


// Sets default values
AGrappleLocation_CPP::AGrappleLocation_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SphereGrappleLocation = CreateDefaultSubobject<USphereComponent>(TEXT("GrappleLocation"));
	SphereGrappleLocation->InitSphereRadius(300.f);

	Tags.Add(FName("Grapple"));
}

// Called when the game starts or when spawned
void AGrappleLocation_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrappleLocation_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

