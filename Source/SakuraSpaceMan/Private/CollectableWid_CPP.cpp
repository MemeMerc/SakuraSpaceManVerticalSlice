// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableWid_CPP.h"
#include "Components/Image.h"
#include "SakuraSpaceManGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CanvasPanelSlot.h"
#include "Blueprint/WidgetLayoutLibrary.h"

void UCollectableWid_CPP::NativeConstruct()
{
	Super::NativeConstruct();

	// Check if world can be found.
	if (GetWorld() != nullptr)
	{
		// Cast to gamemode.
		ASakuraSpaceManGameModeBase* GameMode = Cast<ASakuraSpaceManGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

		// Check that gamemode was found.
		if (GameMode != nullptr)
		{
			TargetLocation = GameMode->GetGameHudLocation();
		}
	}
}

// Move this widget to the target location.
void UCollectableWid_CPP::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	// Find Direction to move to
	Direction = TargetLocation - CurrentLocation;
	Direction = Direction.GetSafeNormal();

	// Get directon to move to.
	CurrentLocation += Direction * DeltaTime * fSpeed;

	// Moves widget in viewport.
	SetPositionInViewport(CurrentLocation);

	// Checks if widget has reached its target location.
	if (CurrentLocation.Equals(TargetLocation, 50))
	{
		// Remove widget from the screen.
		RemoveFromViewport();	
	}
		
}

// Set the start loction of this widget.
void UCollectableWid_CPP::SetPosition(FVector2D _StartLocation)
{
	// Set the start loction of this widget.
	CurrentLocation = _StartLocation;
}