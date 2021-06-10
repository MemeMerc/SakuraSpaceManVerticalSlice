// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Player_CPP.h"
#include "GameFramework/GameModeBase.h"
#include "SakuraSpaceManGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SAKURASPACEMAN_API ASakuraSpaceManGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;

	// Set respwn location of the player.
	void SetRespawnLocation(FVector _RespawnLocation);
	// Return respawn location of the player.
	FVector GetRespawnLocation() const;

	void Respawn(AActor* _PlayerCharater);

	// Set the Players Score.
	void SetPlayersScore(int _AddToScore);

	// Get the Players Score.
	UFUNCTION(BlueprintCallable)
		int GetPlayersScore() const;

	UFUNCTION(BlueprintImplementableEvent)
		int UpdateScore(int _PlayersScore);

protected:

	// Respawn locaton of the player.
	FVector RespawnLocation;

	// Referance to the player.
	APlayer_CPP* PlayerCharater;

	// Players Score
	int PlayersScore;

	class UGameHudWid_CPP* GameHudWid;
};