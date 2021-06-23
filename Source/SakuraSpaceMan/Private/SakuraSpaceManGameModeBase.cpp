// Copyright Epic Games, Inc. All Rights Reserved.


#include "SakuraSpaceManGameModeBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD_CPP.h"
#include "Components/CanvasPanelSlot.h"
#include "Blueprint/WidgetLayoutLibrary.h"


void ASakuraSpaceManGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	if (GetWorld() != nullptr)
	{
		// Check that it can find the widget class and that it can find the world.
		if (GameHud_WidClass != nullptr)
		{
			// Create the widget from the class provided.
			GameHud_Wid = CreateWidget<UGameHUD_CPP>(GetWorld(), GameHud_WidClass);
			// Add widget to viewport.
			GameHud_Wid->AddToViewport();

			// Get location of widget.
			FGeometry Geometry = GameHud_Wid->GetCachedGeometry();
			GameHudLocation = Geometry.AbsoluteToLocal(GameHud_Wid->GetCachedGeometry().GetAbsolutePosition()) + GameHud_Wid->GetCachedGeometry().GetLocalSize() / 2.0f;
		}
	}
}

// Set the respawm locaton of the player.
void ASakuraSpaceManGameModeBase::SetRespawnLocation(FVector _RespawnLocation)
{
	// Set RespawnLocation to the varable provided.
	RespawnLocation = _RespawnLocation;
}

// Return the saved respawn location,
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
		GameHud_Wid->UpdateScore(100);
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