// Copyright Epic Games, Inc. All Rights Reserved.

#include "somaGameMode.h"
#include "somaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AsomaGameMode::AsomaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
