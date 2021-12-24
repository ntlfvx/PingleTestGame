// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LocationManager.h"
#include "GameFramework/GameModeBase.h"
#include "GreenBoots_TestGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GREENBOOTS_TESTGAME_API AGreenBoots_TestGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ALocationManager>LocationManagerClass;
	
	
};
