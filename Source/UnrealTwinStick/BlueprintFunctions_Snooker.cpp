// Fill out your copyright notice in the Description page of Project Settings.

#include "BlueprintFunctions_Snooker.h"



/* Returns the colour of a snooker ball, if index 0-14 are red, 15-20 are yellow-black, 21 is white */
FLinearColor UBlueprintFunctions_Snooker::GetSnookerBallColour(int ballIndex)
{
	switch (ballIndex)
	{
	default:
		return FLinearColor(0.8, 0.01, 0.02);	// Red
		break;
	case 15:
		return FLinearColor(1, 0.6, 0.004);		// Yellow
		break;
	case 16:
		return FLinearColor(0.005, 0.16, 0.12);	// Green
		break;
	case 17:
		return FLinearColor(0.28, 0.08, 0.01);	// Brown
		break;
	case 18:
		return FLinearColor(0.004, 0.2, 0.5);	// Blue
		break;
	case 19:
		return FLinearColor(0.9, 0.15, 0.22);	// Pink
		break;
	case 20:
		return FLinearColor(0, 0, 0);		// Black
		break;
	case 21:
		return FLinearColor(1, 1, 1);		// White
		break;
	}
}