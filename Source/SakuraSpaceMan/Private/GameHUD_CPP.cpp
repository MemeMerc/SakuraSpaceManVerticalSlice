// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD_CPP.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"


// Construction scrip.
void UGameHUD_CPP::NativeConstruct()
{
	Super::NativeConstruct();

	if (Score >= 0)
	{
		SakuraEnergy_Img->SetVisibility(ESlateVisibility::Hidden);
		PlayersScore_Txt->SetText(FText::FromString(""));
	}
}

// Update the score Displayed in GameHud widget.
void UGameHUD_CPP::UpdateScore(int _NewScore)
{
	Score = _NewScore;

	PlayersScore_Txt->SetText(FText::AsNumber(Score));

	if (SakuraEnergy_Img->GetVisibility() == ESlateVisibility::Hidden)
	{
		SakuraEnergy_Img->SetVisibility(ESlateVisibility::Visible);
	}
}