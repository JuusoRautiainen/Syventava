// Fill out your copyright notice in the Description page of Project Settings.


#include "Hahmo.h"

// Sets default values
AHahmo::AHahmo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHahmo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHahmo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHahmo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

