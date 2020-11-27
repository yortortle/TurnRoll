// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TurnRollGameMode.h"
#include "TurnRollCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATurnRollGameMode::ATurnRollGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
