// Fill out your copyright notice in the Description page of Project Settings.

#include "SnookerBall.h"


// Sets default values
ASnookerBall::ASnookerBall()
	: BallIndex(0)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASnookerBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnookerBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

