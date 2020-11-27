// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "TurnRoll.h"

UMyGameInstance::UMyGameInstance(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	isInitialized = false;
}


void UMyGameInstance::Init()
{
	//Won't run again if the game instance is already intialized
	if (this->isInitialized)
	{
		return;
	}

	this->isInitialized = true;

	//locating character assets, makes a udatatable which loads the datatable for my characters
	UDataTable* party = Cast<UDataTable>(StaticLoadObject(
		UDataTable::StaticClass(), NULL, TEXT("DataTable'/Game/DataTable/CharacterInfo.CharacterInfo'")
	));

	if (party == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("did not find party data table"));
		return;
	}
	 

	//debug to check if first data table is working.
	//FCharacterStats* row = party->FindRow<FCharacterStats>(TEXT(
		//"C3"), TEXT("LookupCharacterClass"));

	//float f1 = row->Attack;
	//UE_LOG(LogTemp, Warning, TEXT("%f"), f1);


	FCharInfo* char1 = party->FindRow<FCharInfo>(TEXT(
		"C1"), TEXT("Lookup Character"));
	FCharInfo* char2 = party->FindRow<FCharInfo>(TEXT(
		"C3"), TEXT("Lookup Character"));
	FCharInfo* char3 = party->FindRow<FCharInfo>(TEXT(
		"C4"), TEXT("Lookup Character"));
	FCharInfo* char4 = party->FindRow<FCharInfo>(TEXT(
		"C5"), TEXT("Lookup Character"));

	if (char1 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C3' not found!"));
		return;
	}
	if (char2 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C3' not found!"));
		return;
	}
	if (char3 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C3' not found!"));
		return;
	}
	if (char4 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C3' not found!"));
		return;
	}

	//passes in the ID of the party member to create and return a main character into the TArray PartyMembers
	this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char1, this));
	this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char2, this));
	this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char3, this));
	this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char4, this));


	//testing output of returned object
	//UCharacterState* obj = UCharacterState::CreateGameCharacter(row, this);
	//float test = obj->Attack;
	//UE_LOG(LogTemp, Warning, TEXT("%f"), test);
}

