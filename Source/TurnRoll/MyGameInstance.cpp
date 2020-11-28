// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "TurnRoll.h"

UMyGameInstance::UMyGameInstance(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	isInitialized = false;
}

//probably have a 'loaded' object that is determined from pressing a button in here, aka it will load the object using findrow probably and then that object will be qued for the 'switch character' function which will probably just destroy the current
//actor and then spawn another at the same location. The actosr will probably all inherit from main character in some way.
//maybe have a button that updates the game instance with a variable and then checks conditionals and loads the proper character from the partyarray, returns that object, and then the spawn function will run
//have a UI in your house to select characters to have in your party, maybe like switching out the buttons basically. this seems hard.


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
	FCharInfo* char5 = party->FindRow<FCharInfo>(TEXT(
		"c6"), TEXT("Lookup Character"));
	FCharInfo* char6 = party->FindRow<FCharInfo>(TEXT(
		"C7"), TEXT("Lookup Character"));

	if (char1 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C1' not found!"));
		return;
	}
	if (char2 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C3' not found!"));
		return;
	}
	if (char3 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C4' not found!"));
		return;
	}
	if (char4 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C5' not found!"));
		return;
	}
	if (char5 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C6' not found!"));
		return;
	}
	if (char6 == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID 'C7' not found!"));
		return;
	}





	//passes in the ID of the party member to create and return a main character into the TArray PartyMembers
	this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char1, this));
	this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char2, this));
	
	
	//this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char3, this));
	//this->PartyMembers.Add(UCharacterState::CreateGameCharacter(char4, this));

	this->FullParty.Add(UCharacterState::CreateGameCharacter(char1, this));
	this->FullParty.Add(UCharacterState::CreateGameCharacter(char2, this));
	this->FullParty.Add(UCharacterState::CreateGameCharacter(char3, this));
	this->FullParty.Add(UCharacterState::CreateGameCharacter(char4, this));
	this->FullParty.Add(UCharacterState::CreateGameCharacter(char5, this));
	this->FullParty.Add(UCharacterState::CreateGameCharacter(char6, this));




	//testing output of returned object
	//UCharacterState* obj = UCharacterState::CreateGameCharacter(row, this);
	//float test = obj->Attack;
	//UE_LOG(LogTemp, Warning, TEXT("%f"), test);
}

