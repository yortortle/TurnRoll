// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FCharInfo.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCharInfo : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Info")
    FString Character_Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Character Info")
    FString Class_ID;
};