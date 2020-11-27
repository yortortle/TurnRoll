// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "TurnRoll.h"

UMyGameInstance::UMyGameInstance(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	isInitialized = false;
}


void UMyGameInstance::Init()
{
	if (this->isInitialized)
	{
		return;
	}
	this->isInitialized = true;

	//locating character assets
	UDataTable* party = Cast<UDataTable>(StaticLoadObject(
		UDataTable::StaticClass(), NULL, TEXT("DataTable'/Game/Data/CharacterStats.CharacterStats'")
	));

	if (party == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("did not find party data table"));
		return;
	}
	 
	//locate character ID
	FCharInfo* row = party->FindRow<FCharInfo>(TEXT(
		"C1"), TEXT("Lookup Character"));

	if (row == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C1' not found!"));
		return;
	}

	this->PartyMembers.Add(UCharacterState::CreateGameCharacter(row, this));
}

