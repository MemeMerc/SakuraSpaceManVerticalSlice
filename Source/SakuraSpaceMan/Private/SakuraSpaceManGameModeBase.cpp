// Copyright Epic Games, Inc. All Rights Reserved.


#include "SakuraSpaceManGameModeBase.h"
#include "GameFramework/CharacterMovementComponent.h"

void ASakuraSpaceManGameModeBase::SetRespawnLocation(FVector _RespawnLocation)
{
	RespawnLocation = _RespawnLocation;
}

FVector ASakuraSpaceManGameModeBase::GetRespawnLocation() const
{
	return(RespawnLocation);
}

void ASakuraSpaceManGameModeBase::Respawn(AActor* _PlayerCharater)
{
	if (PlayerCharater == nullptr)
	{
		PlayerCharater = Cast<APlayer_CPP>(_PlayerCharater);
	}

	PlayerCharater->GetCharacterMovement()->StopMovementImmediately();
	PlayerCharater->SetActorLocation(RespawnLocation);
	
}