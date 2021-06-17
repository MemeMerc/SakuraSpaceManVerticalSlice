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

		

		// Get the location of the this widget.
		FGeometry Geometry = this->GetCachedGeometry();
		CurrentLocation = Geometry.AbsoluteToLocal(this->GetCachedGeometry().GetAbsolutePosition()) + this->GetCachedGeometry().GetLocalSize() / 2.0f;

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, CurrentLocation.ToString());

		// Find Direction to move to
		Direction = TargetLocation - CurrentLocation;
		Direction = Direction.GetSafeNormal();

		// Get directon to move to.
		CurrentLocation += Direction;

		// Move widget to target.
		this->SetPositionInViewport(CurrentLocation);

}