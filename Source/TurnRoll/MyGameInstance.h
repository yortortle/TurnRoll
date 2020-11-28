// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterState.h"
#include "Engine/GameInstance.h"

#include "MyGameInstance.generated.h"

UCLASS()
class TURNROLL_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UMyGameInstance(const class FObjectInitializer& ObjectInitializer);

public:
	//array to store the party members loaded
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Instance Data")
	TArray<UCharacterState*> PartyMembers;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Instance Data")
	TArray<UCharacterState*> FullParty;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Instance Data")
	bool InteractNPC;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Instance Data")
	float Gold = 25.0f;

protected:
	bool isInitialized;

public:
	void Init();
};
