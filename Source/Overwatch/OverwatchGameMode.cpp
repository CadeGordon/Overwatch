// Copyright Epic Games, Inc. All Rights Reserved.

#include "OverwatchGameMode.h"
#include "OverwatchHUD.h"
#include "OverwatchCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOverwatchGameMode::AOverwatchGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOverwatchHUD::StaticClass();
}
