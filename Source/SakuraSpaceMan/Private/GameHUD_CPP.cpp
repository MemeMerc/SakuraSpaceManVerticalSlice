// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD_CPP.h"
#include "Components/TextBlock.h"

void UGameHUD_CPP::UpdateScore(int _NewScore)
{
	Score = _NewScore;

	PlayersScore->SetText(FText::AsNumber(Score));
}