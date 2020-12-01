// Fill out your copyright notice in the Description page of Project Settings.


#include "YortCharacter.h"

void AYortCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Yort begin play"));
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AYortCharacter::OnOverLapBegin);
	HitBox->SetCollisionProfileName("NoCollision");
}

void AYortCharacter::Action()
{
	//sets timer for attack animation which will return and stop my character from moving
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, 1, false);
	UE_LOG(LogTemp, Warning, TEXT("YortAction"));
	HitBox->SetCollisionProfileName("OverlapAllDynamic");
	HitBox->SetCollisionProfileName("NoCollision");
}

void AYortCharacter::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	//UE_LOG(LogTemp, Warning, TEXT("YortOverLap"));

	//turning the collision box on

	HitBox->SetCollisionProfileName("OverlapAllDynamic");
	if (OtherActor->ActorHasTag("Tree"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Tree Collided"));
		OtherActor->Destroy();
	}
	UE_LOG(LogTemp, Warning, TEXT("Overlap"));
}
