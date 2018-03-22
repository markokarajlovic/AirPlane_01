// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AirPlane_01GameMode.h"
#include "AirPlane_01Pawn.h"

AAirPlane_01GameMode::AAirPlane_01GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AAirPlane_01Pawn::StaticClass();
}
