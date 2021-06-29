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
	ASakuraSpaceManGameModeBase();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	// Set respwn location of the player.
	void SetRespawnLocation(FVector _RespawnLocation);
	// Return respawn location of the player.
	FVector GetRespawnLocation() const;

	void Respawn(AActor* _PlayerCharater);

	// Set the Players Score.
	void SetPlayersScore(int _AddToScore);

	FVector2D GetGameHudLocation();

	// Get the Players Score.
	int GetPlayersScore() const;

	// Get the Players Time.
	float GetPlayersTime() const;

	void CheckHighScore();

protected:

	// Respawn locaton of the player.
	FVector RespawnLocation;

	// Referance to the player.
	APlayer_CPP* PlayerCharater;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<class UGameHUD_CPP> GameHud_WidClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UGameHUD_CPP* GameHud_Wid;

	// Players Score
	int PlayersScore;
	float  Timer;

	FVector2D GameHudLocation;


	// HightScore
	int BestPlayerScore;
	float  BestPlayerTime;
};