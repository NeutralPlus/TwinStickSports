// Fill out your copyright notice in the Description page of Project Settings.

#include "BlueprintFunctions_Maths.h"
#include "Kismet/KismetMathLibrary.h"


/* Returns a random vector in the XY plane with length of 1 */
FVector UBlueprintFunctions_Maths::RandomVectorXY(float length)
{
	FVector Result;

	float L;

	do
	{
		// Check random vectors in the unit circle so result is statistically uniform.
		Result.X = FMath::FRand() * 2.0f - 1.0f;
		Result.Y = FMath::FRand() * 2.0f - 1.0f;
		Result.Z = 0.0f;
		L = Result.SizeSquared();
	} while (L > 1.0f || L < KINDA_SMALL_NUMBER);

	return Result * (length / FMath::Sqrt(L));
}


