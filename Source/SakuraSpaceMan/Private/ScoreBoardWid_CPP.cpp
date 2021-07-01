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

	if (GameMode)
	{

		// Set current players Score and time.
		int score = GameMode->GetPlayersScore();
		TArray<int> temp = GameMode->GetPlayersTime();

		TimeMinutes = temp[0];
		TimeSeconds = temp[1];
		TimeMilliseconds = temp[2];

		PlayersScore_Txt->SetText(FText::AsNumber(score));

		// Set best score and time.
		GameMode->CheckHighScore();

		score = GameMode->GetHighScore();
		
		BestScore_Txt->SetText(FText::AsNumber(score));
		
		TArray<int> temp_2 = GameMode->GetBestPlayerTime();

		BestTimeMinutes = temp_2[0];
		BestTimeSeconds = temp_2[1];
		BestTimeMilliseconds = temp_2[2];
	
	}

}