// Fill out your copyright notice in the Description page of Project Settings.


#include "RobottiActor.h"

// Sets default values
ARobottiActor::ARobottiActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobottiActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobottiActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

