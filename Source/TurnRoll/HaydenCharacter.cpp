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
		//grabbing location and rotation for spawning of particles
		FRotator CurrentRotation = this->GetActorRotation();
		FVector SpawnLocation = this->GetActorLocation();
		FActorSpawnParameters SpawnParams;

		//returns if teleportpoint is not set properly
		if (TeleportPoint == nullptr)
		{
			return;
			UE_LOG(LogTemp, Warning, TEXT("teleport point is null"));
		}

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
			FVector End = Start + (Dir* 5000);
			FHitResult Hit;
			FCollisionQueryParams TraceParams;

			//line trace function itself
			GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams);

			if (Hit.IsValidBlockingHit())
			{
				//debug test to see if line trace is colliding with block properly
				//UE_LOG(LogTemp, Warning, TEXT("Hit something"));
			}

			//sets active to true so tick function can repeat action until mouse is released
			IsActive = true;
			TeleportLocation = Hit.Location;

			//line tracing function, determins line trace and returns hit object.
			TargetPointRef = GetWorld()->SpawnActor<AActor>(TeleportPoint, Hit.Location, CurrentRotation, SpawnParams);

			//debug for line trace
			//DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 1.0f);
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("HaydenAction"));
}

void AHaydenCharacter::ActionReleased()
{
	//sets hit active to false, teleports this actor, and destroys the projectile left behind hit trace to indicate teleport location.
	IsActive = false;
	TargetPointRef->Destroy();
	this->TeleportTo(TeleportLocation, GetActorRotation(), false, false);
}
