// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreBoardWid_CPP.generated.h"

/**
 * 
 */
UCLASS()
class SAKURASPACEMAN_API UScoreBoardWid_CPP : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

protected:

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PlayersScore_Txt;
	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Timer_Txt;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* BestScore_Txt;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* BestTime_Txt;

	UPROPERTY(BlueprintReadOnly)
		int TimeMilliseconds;
	UPROPERTY(BlueprintReadOnly)
		int TimeSeconds;
	UPROPERTY(BlueprintReadOnly)
		int TimeMinutes;

	UPROPERTY(BlueprintReadOnly)
		int BestTimeMilliseconds;
	UPROPERTY(BlueprintReadOnly)
		int BestTimeSeconds;
	UPROPERTY(BlueprintReadOnly)
		int BestTimeMinutes;
};
