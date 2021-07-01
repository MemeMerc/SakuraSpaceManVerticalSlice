// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGame_CPP.h"

USaveGame_CPP::USaveGame_CPP()
{
	HightestScore = 0;

	// Initialise BestTime to the highest number possible.
	BestTime.Init(TNumericLimits<int32>::Max(), 3);
}

void USaveGame_CPP::SetHightestScore(int _NewScore)
{
	HightestScore = _NewScore;
}
int USaveGame_CPP::GetHighestScore() const
{
	return(HightestScore);
}

void USaveGame_CPP::SetBestTime(TArray<int> _NewTime)
{
	BestTime = _NewTime;
}

TArray<int> USaveGame_CPP::GetBestTime()
{
	return(BestTime);
}