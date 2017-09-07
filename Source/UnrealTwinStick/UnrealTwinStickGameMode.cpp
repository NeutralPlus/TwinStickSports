// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UnrealTwinStickGameMode.h"
#include "UnrealTwinStickPawn.h"

AUnrealTwinStickGameMode::AUnrealTwinStickGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AUnrealTwinStickPawn::StaticClass();
}

