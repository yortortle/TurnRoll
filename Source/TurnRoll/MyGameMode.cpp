// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "TurnRoll.h"
#include "MyGameInstance.h"
#include "MainCharacter.h"

AMyGameMode::AMyGameMode(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	//just in case, using game mode BP with my character class BP instead though.
	DefaultPawnClass = AMainCharacter::StaticClass();
}

void AMyGameMode::BeginPlay()
{
	//on begin play with my game mode this will initialize my customized game instance
	Cast<UMyGameInstance>(GetGameInstance())->Init();
}