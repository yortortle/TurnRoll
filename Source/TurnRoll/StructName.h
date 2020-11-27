// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StructName.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FStructTest : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "TestCustomData")
        int SomeNumber;

    UPROPERTY(BlueprintReadOnly, Category = "TestCustomData")
        FString SomeString;
};

