// Fill out your copyright notice in the Description page of Project Settings.


#include "HaydenCharacter.h"

void AHaydenCharacter::Action()
{
	//if teleport is not on cooldown can use function
	if (CanTeleport == true)
	{
		FRotator CurrentRotation = this->GetActorRotation();
		FVector SpawnLocation = this->GetActorLocation();
		SpawnLocation.X += 100;
		FActorSpawnParameters SpawnParams;

		if (TeleportPoint == nullptr)
		{
			return;
			UE_LOG(LogTemp, Warning, TEXT("teleport point is null"));
		}

		AActor* TargetPointRef = GetWorld()->SpawnActor<AActor>(TeleportPoint, SpawnLocation, CurrentRotation, SpawnParams);

		UE_LOG(LogTemp, Warning, TEXT("can teleport"));
		//GetWorld()->SpawnActor()
	}
	UE_LOG(LogTemp, Warning, TEXT("HaydenAction"));
}