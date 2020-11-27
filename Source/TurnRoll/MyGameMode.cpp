// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "TurnRoll.h"
#include "MyGameInstance.h"
#include "MainCharacter.h"

AMyGameMode::AMyGameMode(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DefaultPawnClass = AMainCharacter::StaticClass();
}

void AMyGameMode::BeginPlay()
{
	Cast<UMyGameInstance>(GetGameInstance())->Init();
}