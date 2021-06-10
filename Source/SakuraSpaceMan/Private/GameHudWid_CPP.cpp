// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHudWid_CPP.h"
#include "Components/TextBlock.h"
#include "Internationalization/Text.h"

bool UGameHudWid_CPP::Initialize()
{
	bool bInit = Super::Initialize();
	return bInit;
}

void UGameHudWid_CPP::NativeConstruct()
{
	Super::NativeConstruct();

	//PlayersScore_txt->SetText(FText::FromString("JJJ"));

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "XXX");

	if (PlayersScore_txt)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "PPP");
	}
}

void UGameHudWid_CPP::UpdateScore(int _NewScore)
{
	Score = _NewScore;

	//PlayersScore_txt->SetText(FText::AsNumber(Score));
}
