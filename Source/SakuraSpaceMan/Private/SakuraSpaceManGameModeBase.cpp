// Copyright Epic Games, Inc. All Rights Reserved.


#include "SakuraSpaceManGameModeBase.h"

void ASakuraSpaceManGameModeBase::SetRespawnLocation(FVector _RespawnLocation)
{
	RespawnLocation = _RespawnLocation;
}

FVector ASakuraSpaceManGameModeBase::GetRespawnLocation() const
{
	return(RespawnLocation);
}
