// Fill out your copyright notice in the Description page of Project Settings.


#include "YortCharacter.h"

void AYortCharacter::Action()
{
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, 1, false);
	UE_LOG(LogTemp, Warning, TEXT("YortAction"));
}