// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modulo12GameMode.h"
#include "Modulo12Character.h"
#include "UObject/ConstructorHelpers.h"

AModulo12GameMode::AModulo12GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
