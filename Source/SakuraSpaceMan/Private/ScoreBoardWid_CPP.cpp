// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreBoardWid_CPP.h"
#include "SakuraSpaceManGameModeBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"

// Construction scrip.
void UScoreBoardWid_CPP::NativeConstruct()
{
	ASakuraSpaceManGameModeBase* GameMode = Cast<ASakuraSpaceManGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	int score = GameMode->GetPlayersScore();
	//float timer = GameMode->GetPlayersTime();

	PlayersScore_Txt->SetText(FText::AsNumber(score));
	//Timer_Txt->SetText(FText::AsNumber(timer));
}