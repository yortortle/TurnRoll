// Fill out your copyright notice in the Description page of Project Settings.


#include "HaydenCharacter.h"
#include "DrawDebugHelpers.h"

void AHaydenCharacter::Tick(float DeltaTime)
{
	if (IsActive)
	{
		if (TargetPointRef != nullptr)
		{
			TargetPointRef->Destroy();
		}
		Action();
	}
}

void AHaydenCharacter::Action()
{
	//if teleport is not on cooldown can use function
	if (CanTeleport == true)
	{
		FRotator CurrentRotation = this->GetActorRotation();
		FVector SpawnLocation = this->GetActorLocation();
		//SpawnLocation.X += 100;
		FActorSpawnParameters SpawnParams;

		if (TeleportPoint == nullptr)
		{
			return;
			UE_LOG(LogTemp, Warning, TEXT("teleport point is null"));
		}


		//AActor* TargetPointRef = GetWorld()->SpawnActor<AActor>(TeleportPoint, SpawnLocation, CurrentRotation, SpawnParams);

		Teleporting = true;

		if (Teleporting == true)
		{
			//Grabbing the actors location as the start point
			FVector Start = GetActorLocation();

			//Grabbing the forward vector of the camera as the end point
			FVector EndFollow = GetFollowCamera()->GetForwardVector();

			//converting the forward vector to a rotator and updating its pitch to increase its range.
			FRotator RotationTest = EndFollow.Rotation();
			RotationTest.Pitch += 30;
			FVector Dir = RotationTest.Vector();

			//setting up the end line trace parameters and the hit results for the line trace
			FVector End = Start + (Dir* 1000);
			FHitResult Hit;
			FCollisionQueryParams TraceParams;

			//line trace function itself
			GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

			if (Hit.IsValidBlockingHit())
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit something i think"));
			}

			//FLatentActionInfo ActionInfo;
			//ActionInfo.ExecutionFunction = "Action";
			//AActor* TargetPointRef = GetWorld()->SpawnActor<AActor>(TeleportPoint, Hit.Location, CurrentRotation, SpawnParams);
			//UKismetSystemLibrary::RetriggerableDelay(GetWorld(), 0.1, ActionInfo);
			//Hit.bBlockingHit

			IsActive = true;
			TargetPointRef = GetWorld()->SpawnActor<AActor>(TeleportPoint, Hit.Location, CurrentRotation, SpawnParams);

			//debug for line trace
			DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 1.0f);
		}



		UE_LOG(LogTemp, Warning, TEXT("can teleport"));
		//GetWorld()->SpawnActor()
	}
	UE_LOG(LogTemp, Warning, TEXT("HaydenAction"));
}