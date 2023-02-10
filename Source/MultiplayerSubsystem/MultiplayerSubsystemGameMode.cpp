// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerSubsystemGameMode.h"
#include "MultiplayerSubsystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerSubsystemGameMode::AMultiplayerSubsystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
