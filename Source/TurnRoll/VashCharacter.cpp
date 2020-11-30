// Fill out your copyright notice in the Description page of Project Settings.


#include "VashCharacter.h"

void AVashCharacter::Action()
{
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, 1.f, false);
	UE_LOG(LogTemp, Warning, TEXT("ActionVash"));
}