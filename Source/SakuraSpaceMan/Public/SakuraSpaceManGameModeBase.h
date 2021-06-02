// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
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

	void SetRespawnLocation(FVector _RespawnLocation);
	FVector GetRespawnLocation() const;

protected:

	FVector RespawnLocation;
	
};
