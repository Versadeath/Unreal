// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UnrealProject.h"
#include "UnrealProjectGameMode.h"
#include "UnrealProjectHUD.h"
#include "UnrealProjectCharacter.h"

AUnrealProjectGameMode::AUnrealProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealProjectHUD::StaticClass();
}
