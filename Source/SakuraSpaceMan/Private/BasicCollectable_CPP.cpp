// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCollectable_CPP.h"

// Sets default values
ABasicCollectable_CPP::ABasicCollectable_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

