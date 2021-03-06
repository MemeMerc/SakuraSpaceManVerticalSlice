// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD_CPP.generated.h"

/**
 * 
 */
UCLASS()
class SAKURASPACEMAN_API UGameHUD_CPP : public UUserWidget
{
	GENERATED_BODY()
public:

	virtual void NativeConstruct() override;

	// Update the score Displayed.
	void UpdateScore(int _NewScore);

protected:
		
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* PlayersScore_Txt;

	UPROPERTY(meta = (BindWidget))
	class UImage* SakuraEnergy_Img;


	int Score;

};
