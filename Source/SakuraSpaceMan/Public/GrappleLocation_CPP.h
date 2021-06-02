// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GrappleLocation_CPP.generated.h"

UCLASS()
class SAKURASPACEMAN_API AGrappleLocation_CPP : public AActor
{
	GENERATED_BODY()


	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grapple, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* SphereGrappleLocation;




public:	
	// Sets default values for this actor's properties
	AGrappleLocation_CPP();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector2D* GetScreenLoc();
	void SetScreenLoc(FVector2D _ScreenLoc);

	float GetScreenLen();
	void SetScreenLen(float _ScreenLen);

	UFUNCTION(BlueprintImplementableEvent, Category = Grapple)
	void SetWidgetVisibility(bool _bIsVisible);

	bool GetLaunch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	FVector2D vScreenLocation;
	UPROPERTY(EditAnywhere)
	float fScreenLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Launch, meta = (AllowPrivateAccess = "true"))
	bool bCanLaunchFurther;

private:	
	

};
