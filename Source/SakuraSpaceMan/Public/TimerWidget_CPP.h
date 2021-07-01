// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TimerWidget_CPP.generated.h"

/**
 * 
 */
UCLASS()
class SAKURASPACEMAN_API UTimerWidget_CPP : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	void SetTime();

	// Return Time in an array. Format minutes : seconds : milliseconds.
	TArray<int> ReturnTime();

protected:

	UPROPERTY(BlueprintReadOnly)
		float TimeMiliseconds;
	UPROPERTY(BlueprintReadOnly)
		int TimeSeconds;
	UPROPERTY(BlueprintReadOnly)
		int TimeMinites;

	FTimerHandle TimerHandle;
	float fRate;
	
};
