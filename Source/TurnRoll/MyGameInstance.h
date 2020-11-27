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
	TArray<UCharacterState*> PartyMembers;
	
protected:
	bool isInitialized;

public:
	void Init();

};
