// Fill out your copyright notice in the Description page of Project Settings.


#include "YortCharacter.h"

void AYortCharacter::BeginPlay()
{
	Super::BeginPlay();
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AMainCharacter::OnOverLapBegin);
}

void AYortCharacter::Action()
{
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, 1, false);
	UE_LOG(LogTemp, Warning, TEXT("YortAction"));
}

void AYortCharacter::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("YortOverLap"));
}
