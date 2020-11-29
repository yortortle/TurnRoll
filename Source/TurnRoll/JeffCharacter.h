// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "JeffCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURNROLL_API AJeffCharacter : public AMainCharacter
{
	GENERATED_BODY()

public:
	virtual void Interact() override;

	virtual void Action() override;
};
