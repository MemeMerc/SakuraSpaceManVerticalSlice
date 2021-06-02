// Fill out your copyright notice in the Description page of Project Settings.
//Grapple Location was created and coded by Lucas Mcalpine 

#include "GrappleLocation_CPP.h"


// Sets default values
AGrappleLocation_CPP::AGrappleLocation_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SphereGrappleLocation = CreateDefaultSubobject<USphereComponent>(TEXT("GrappleLocation"));
	SphereGrappleLocation->InitSphereRadius(300.f);

	Tags.Add(FName("Grapple"));

	fScreenLength = 0.f;
	vScreenLocation = FVector2D(0.f);
	bCanLaunchFurther = false;

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

FVector2D* AGrappleLocation_CPP::GetScreenLoc()
{
	return(&vScreenLocation);
}
void AGrappleLocation_CPP::SetScreenLoc(FVector2D _ScreenLoc)
{
	vScreenLocation = _ScreenLoc;
}
float AGrappleLocation_CPP::GetScreenLen()
{
	return(fScreenLength);
}
void AGrappleLocation_CPP::SetScreenLen(float _ScreenLen)
{
	fScreenLength = _ScreenLen;
}

bool AGrappleLocation_CPP::GetLaunch()
{

	return(bCanLaunchFurther);

}