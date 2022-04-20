// Fill out your copyright notice in the Description page of Project Settings.


#include "Robotti.h"

// Sets default values
ARobotti::ARobotti()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> robotMesh(TEXT("SkeletalMesh'/Game/FirstPersonBP/robotti.robotti'"));
	//StaticMesh'/Game/FirstPersonBP/robotti.robotti'
		if (robotMesh.Object)
		{
			TArray<USkeletalMeshComponent*> skeletalMeshes;
			GetComponents(skeletalMeshes, false);
			if (skeletalMeshes.Num() > 0)
			{
				skeletalMeshes[0]->SetSkeletalMesh(robotMesh.Object);
			}
		}
}

// Called when the game starts or when spawned
void ARobotti::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobotti::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Log, TEXT("Kukapa oot, minne meet"))

}

// Called to bind functionality to input
void ARobotti::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

