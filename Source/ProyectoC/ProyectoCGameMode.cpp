// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProyectoCGameMode.h"
#include "ProyectoCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyectoCGameMode::AProyectoCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
