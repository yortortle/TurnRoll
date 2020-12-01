// Fill out your copyright notice in the Description page of Project Settings.


#include "JeffCharacter.h"

void AJeffCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Jeff"))
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AJeffCharacter::OnOverLapBegin);
}
void AJeffCharacter::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("interactjeff"));
}

void AJeffCharacter::Action()
{
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, .75f, false);
	UE_LOG(LogTemp, Warning, TEXT("ActionJeff"));
}

void AJeffCharacter::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlapjeff"));
}
