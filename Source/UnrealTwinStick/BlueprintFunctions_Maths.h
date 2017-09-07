// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintFunctions_Maths.generated.h"

/**
 * 
 */
UCLASS()
class UNREALTWINSTICK_API UBlueprintFunctions_Maths : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/* Returns a random vector in the XY plane with length of 1 */
	UFUNCTION(BlueprintPure, Category = "Math|Random", meta = (length = 1.0f, NotBlueprintThreadSafe))
	static FVector RandomVectorXY(float length);
	
	
	
};
