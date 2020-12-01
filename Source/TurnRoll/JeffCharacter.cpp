// Fill out your copyright notice in the Description page of Project Settings.


#include "JeffCharacter.h"

void AJeffCharacter::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("interactjeff"));
}

void AJeffCharacter::Action()
{
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, .75f, false);
	UE_LOG(LogTemp, Warning, TEXT("ActionJeff"));
}
