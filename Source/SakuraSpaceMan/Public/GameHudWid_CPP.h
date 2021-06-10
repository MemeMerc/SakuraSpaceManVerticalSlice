// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHudWid_CPP.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class SAKURASPACEMAN_API UGameHudWid_CPP : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual bool Initialize() override;

	virtual void NativeConstruct() override;

	void UpdateScore(int _NewScore);

protected:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock* PlayersScore_txt;

	int Score = 7;

};

