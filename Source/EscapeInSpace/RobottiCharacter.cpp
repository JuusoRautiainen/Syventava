// Fill out your copyright notice in the Description page of Project Settings.


#include "RobottiCharacter.h"

// Sets default values
ARobottiCharacter::ARobottiCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobottiCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobottiCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobottiCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

