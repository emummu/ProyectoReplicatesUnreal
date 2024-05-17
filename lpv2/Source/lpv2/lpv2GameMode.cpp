// Copyright Epic Games, Inc. All Rights Reserved.

#include "lpv2GameMode.h"
#include "lpv2Character.h"
#include "UObject/ConstructorHelpers.h"

Alpv2GameMode::Alpv2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
