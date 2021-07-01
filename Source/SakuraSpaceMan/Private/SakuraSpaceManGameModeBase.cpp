// Copyright Epic Games, Inc. All Rights Reserved.


#include "SakuraSpaceManGameModeBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD_CPP.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/WrapBox.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "TimerWidget_CPP.h"
#include "Math/NumericLimits.h"


ASakuraSpaceManGameModeBase::ASakuraSpaceManGameModeBase()
{
	// This Allows tick to be called.
	PrimaryActorTick.bCanEverTick = true;
}

void ASakuraSpaceManGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	GameHudLocation = FVector2D(50.f, 100.f);

	// Check that the world can be found.
	if (GetWorld() != nullptr)
	{
		// Check that it can find the widget class and that it can find the world.
		if (GameHud_WidClass != nullptr)
		{
			// Create the widget from the class provided.
			GameHud_Wid = CreateWidget<UGameHUD_CPP>(GetWorld(), GameHud_WidClass);
			GameHud_Wid->AddToViewport();
			GameHud_Wid->SetPositionInViewport(GameHudLocation);
		}

		if (Timer_WidClass != nullptr)
		{
			Timer_Wid = CreateWidget<UTimerWidget_CPP>(GetWorld(), Timer_WidClass);
			Timer_Wid->AddToViewport();
		}
	}

	PlayerTime.Init(0, 3);
	BestPlayerTime.Init(TNumericLimits<int32>::Max(), 3);

	HighScore = 0;
}


// Set the respawm locaton of the player.
void ASakuraSpaceManGameModeBase::SetRespawnLocation(FVector _RespawnLocation)
{
	// Set RespawnLocation to the varable provided.
	RespawnLocation = _RespawnLocation;
}

// Return the saved respawn location.
FVector ASakuraSpaceManGameModeBase::GetRespawnLocation() const
{
	// Return players location.
	return(RespawnLocation);
}

// Gets a referance to the player charater, then stops the players movment and set there location to the most recent checkpoint.
void ASakuraSpaceManGameModeBase::Respawn(AActor* _PlayerCharater)
{
	// Check if player dosent equall null.
	if (PlayerCharater == nullptr)
	{
		// Cast to the player charater.
		PlayerCharater = Cast<APlayer_CPP>(_PlayerCharater);
	}

	// Stop players movement.
	PlayerCharater->GetCharacterMovement()->StopMovementImmediately();
	// Set players location. 
	PlayerCharater->SetActorLocation(RespawnLocation);
}

// Set the Players Score.
void ASakuraSpaceManGameModeBase::SetPlayersScore(int _AddToScore)
{
	PlayersScore += _AddToScore;

	if (GameHud_Wid != nullptr)
	{
		GameHud_Wid->UpdateScore(PlayersScore);
	}
}

// Get the Players Score.
int ASakuraSpaceManGameModeBase::GetPlayersScore() const
{
	return(PlayersScore);
}

// Return the locaton of the GameHud in Screen space.
FVector2D ASakuraSpaceManGameModeBase::GetGameHudLocation()
{
	return(GameHudLocation);
}

// Return Time in an array. Format {minutes, seconds, milliseconds}.
TArray<int> ASakuraSpaceManGameModeBase::GetPlayersTime()
{
	PlayerTime = Timer_Wid->ReturnTime();
	return(PlayerTime);
}


// Return the best score.
int ASakuraSpaceManGameModeBase::GetHighScore()
{
	if (PlayersScore > HighScore)
	{
		HighScore = PlayersScore;
	}
	return(HighScore);
}

// Return the best time.
TArray<int> ASakuraSpaceManGameModeBase::GetBestPlayerTime()
{
	PlayerTime = Timer_Wid->ReturnTime();

	for (int i = 0; i <= BestPlayerTime.Num(); i++)
	{
		if (PlayerTime[i] < BestPlayerTime[i])
		{
			BestPlayerTime = PlayerTime;
			return(BestPlayerTime);
		}
	}

	
	return(BestPlayerTime);
}

