// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobottiActor.generated.h"

UCLASS()
class ESCAPEINSPACE_API ARobottiActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARobottiActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector VektoriLuku;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	float Hyokkays(bool value, float etaisyys);
UFUNCTION(BlueprintNativeEvent, BlueprintCallAble)
	void Hyokkaa();
};
