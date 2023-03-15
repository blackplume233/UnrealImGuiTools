﻿// Distributed under the MIT License (MIT) (see accompanying LICENSE file)

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

struct IMGUITOOLS_API FActorComponentCustomization
{
	TSubclassOf<UActorComponent> ComponentClass;
	TFunction<void()> CustomizationDrawFunction;
};

class IMGUITOOLS_API FImGuiToolsGameDebugger
{
public:
	// The draw function that is called when you want to draw the Game Debugger Main Menu, menu.
	static void DrawMainImGuiMenu();

	void RegisterActorComponentCustomization(const FActorComponentCustomization& Customization);
	void UnregisterActorComponentCustomization(const TSubclassOf<UActorComponent> ComponentClass);

private:
	TArray<FActorComponentCustomization> ActorCompCustomizations;
};
