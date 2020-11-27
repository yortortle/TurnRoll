// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FEnemyInfo.generated.h"

USTRUCT(BlueprintType)
struct FEnemyInfo : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Info")
    FString Enemy_Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
    int Attack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
    int Defense;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
    int CritChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
    FString MainMove;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
    TArray<FString> MoveSet;
};