// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "FirstPersonShooter.h"
#include "FirstPersonShooterGameMode.h"
#include "FirstPersonShooterHUD.h"
#include "FirstPersonShooterCharacter.h"

AFirstPersonShooterGameMode::AFirstPersonShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstPersonShooterHUD::StaticClass();
}
