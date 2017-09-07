// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintFunctions_Snooker.generated.h"

/**
 * 
 */
UCLASS()
class UNREALTWINSTICK_API UBlueprintFunctions_Snooker : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/* Returns the colour of a snooker ball, if index 0-14 are red, 15-20 are yellow-black, 21 is white */
	UFUNCTION(BlueprintPure, Category = "Snooker")
	static FLinearColor GetSnookerBallColour(int ballIndex);
	
};
