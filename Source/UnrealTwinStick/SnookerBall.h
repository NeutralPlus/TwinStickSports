// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnookerBall.generated.h"

UCLASS()
class UNREALTWINSTICK_API ASnookerBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnookerBall();

	/** What is the ball number? E.g. for snooker, 0-14 red, 15-20 yellow-black, 21 white */
	UPROPERTY(BlueprintReadWrite)
	int32 BallIndex;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
