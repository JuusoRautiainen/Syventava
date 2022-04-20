// Fill out your copyright notice in the Description page of Project Settings.


#include "SurveillanceCamera.h"

// Sets default values
ASurveillanceCamera::ASurveillanceCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	lerpAlpha = 0.0f;
	holdTime = 0.0f;
	holdRemaining = 0.0f;
	reverseDirection = false;
	rotationSpeed = 1.0f;
	reverseDirection = false;
	isActive = false;
}

// Called when the game starts or when spawned
void ASurveillanceCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurveillanceCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	lerpAlpha = FMath::Clamp(lerpAlpha, 0.0f, 1.0f);
	if (reverseDirection) lerpAlpha -= rotationSpeed * DeltaTime;
	else                    lerpAlpha += rotationSpeed * DeltaTime;
	FRotator newRot = FMath::Lerp(startPosition, endPosition, lerpAlpha);

	SetActorRotation(newRot);
}

// Called to bind functionality to input
void ASurveillanceCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

