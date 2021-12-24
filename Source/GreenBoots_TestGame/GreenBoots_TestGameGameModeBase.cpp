// Copyright Epic Games, Inc. All Rights Reserved.


#include "GreenBoots_TestGameGameModeBase.h"

#include "BaseMapLocation.h"
#include "LocationManager.h"
#include "EngineUtils.h"


void AGreenBoots_TestGameGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FVector Location( 0.0f, 0.0f, 0.0f );
	FRotator Rotation( 0.0f, 0.0f, 0.0f );
	FTransform Transform;
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Owner = this;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	GetWorld()->SpawnActor<ABaseMapLocation>( Location, Rotation, SpawnInfo );
	GetWorld()->SpawnActor<ALocationManager>( LocationManagerClass, Location,Rotation,SpawnInfo );
}


