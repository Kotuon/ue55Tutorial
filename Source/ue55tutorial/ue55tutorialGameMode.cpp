// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue55tutorialGameMode.h"
#include "ue55tutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue55tutorialGameMode::Aue55tutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
