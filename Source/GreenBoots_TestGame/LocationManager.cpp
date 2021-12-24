// Fill out your copyright notice in the Description page of Project Settings.


#include "LocationManager.h"
#include "BaseMapLocation.h"
#include "EngineUtils.h"
#include "Components/BoxComponent.h"



ALocationManager::ALocationManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALocationManager::BeginPlay()
{
	Super::BeginPlay();

	SpawnStartLocation();

	Spawn->Trigger->OnComponentBeginOverlap.AddDynamic( this, &ALocationManager::SpawnRandomLocations );
}

void ALocationManager::EndPlay( const EEndPlayReason::Type EndPlayReason )
{
	Super::EndPlay( EndPlayReason );
}

void ALocationManager::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

void ALocationManager::SpawnStartLocation()
{
	UWorld* const World = GetWorld();
	if ( World )
	{
		FTransform Transform;
		FActorSpawnParameters SpawnParams;

		Spawn = World->SpawnActor<ABaseMapLocation>( MapLocations[0], Transform, SpawnParams );
	}
}

void ALocationManager::SpawnRandomLocations( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{
	UWorld* const World = GetWorld();
	if( World )
	{
		int32 num = FMath::RandRange( 1,8 );

		FTransform Transform;
		FActorSpawnParameters SpawnParams;

		Spawn = World->SpawnActor<ABaseMapLocation>( MapLocations[num], Transform, SpawnParams );
	}
}




