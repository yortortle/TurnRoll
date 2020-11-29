// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "VashCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURNROLL_API AVashCharacter : public AMainCharacter
{
	GENERATED_BODY()
	
public:
	virtual void Action() override;
};
