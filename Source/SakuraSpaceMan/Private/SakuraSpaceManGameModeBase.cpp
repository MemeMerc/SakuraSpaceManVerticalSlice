// Copyright Epic Games, Inc. All Rights Reserved.


#include "SakuraSpaceManGameModeBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameHudWid_CPP.h"



void ASakuraSpaceManGameModeBase::BeginPlay()
{
	//Super::BeginPlay();

	GameHudWid = CreateWidget<UGameHudWid_CPP>(GetWorld());

	GameHudWid->AddToViewport();


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
}

// Get the Players Score.
int ASakuraSpaceManGameModeBase::GetPlayersScore() const
{
	return(PlayersScore);
}