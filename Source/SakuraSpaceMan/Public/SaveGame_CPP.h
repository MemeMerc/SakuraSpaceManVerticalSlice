// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGame_CPP.generated.h"

/**
 * 
 */
UCLASS()
class SAKURASPACEMAN_API USaveGame_CPP : public USaveGame
{
	GENERATED_BODY()
	
public:

	USaveGame_CPP();

	UPROPERTY(EditAnywhere)
		int HightestScore;

	UPROPERTY(EditAnywhere)
		TArray<int> BestTime;

	void SetHightestScore(int _NewScore);
	int GetHighestScore() const;

	void SetBestTime(TArray<int> _NewTime);
	TArray<int> GetBestTime();
};
