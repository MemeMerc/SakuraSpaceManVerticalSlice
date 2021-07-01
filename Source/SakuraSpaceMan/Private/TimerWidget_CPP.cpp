// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerWidget_CPP.h"

void UTimerWidget_CPP::NativeConstruct()
{
	Super::NativeConstruct();

	// fRate is 10 millisecond.
	fRate = 0.01f;

	// Check that a world can be found.
	if (GetWorld())
	{
		// Call the SetTime function every 10 milliseconds to update the display time. 
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UTimerWidget_CPP::SetTime, fRate, true, 0.0f);
	}
}

// Set the time to display, this is called every 10 milisceonds.
void UTimerWidget_CPP::SetTime()
{
	// Increase TimeMiliseconds by 0.0f (our rate).
	TimeMiliseconds += fRate;

	// Check if TimeMiliseconds has reached one seconds.
	if (TimeMiliseconds >= 1)
	{
		TimeSeconds += 1;
		TimeMiliseconds = 0;
	}

	// Check if seconds has reached one minute and reset seconds to 0.
	if (TimeSeconds >= 60)
	{
		TimeMinites += 1;
		TimeSeconds = 0;
	}
}

// Return Time in an array. Format minutes : seconds : milliseconds.
TArray<int> UTimerWidget_CPP::ReturnTime()
{
	// Convert TimeMiliseconds from float to an int for an int array.
	TimeMiliseconds *= 100;
	
	// Tempery array to return.
	TArray<int> tempArry = { TimeMinites, TimeSeconds, static_cast<int>(TimeMiliseconds) };
	return(tempArry);
}