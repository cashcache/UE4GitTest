// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4GitTestGameMode.h"
#include "UE4GitTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4GitTestGameMode::AUE4GitTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
