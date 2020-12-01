// Fill out your copyright notice in the Description page of Project Settings.


#include "VashCharacter.h"

void AVashCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Yort begin play"));
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AVashCharacter::OnOverLapBegin);
}

void AVashCharacter::Action()
{
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, .75f, false);
	UE_LOG(LogTemp, Warning, TEXT("ActionVash"));
}

void AVashCharacter::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Vash"));
}
