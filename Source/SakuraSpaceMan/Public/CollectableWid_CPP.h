// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CollectableWid_CPP.generated.h"

/**
 * 
 */
UCLASS()
class SAKURASPACEMAN_API UCollectableWid_CPP : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;

	void SetPosition(FVector2D _StartLocation);

	UPROPERTY(meta = (BindWidget))
	class UImage* SakuraEnergy_Img;

	UPROPERTY(EditAnywhere)
	float fSpeed = 150.0f;
	
private:
	FVector2D TargetLocation;
	FVector2D CurrentLocation;
	FVector2D Direction;
};
