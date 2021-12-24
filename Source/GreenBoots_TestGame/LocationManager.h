// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LocationManager.generated.h"

class ABaseMapLocation;

UCLASS()
class GREENBOOTS_TESTGAME_API ALocationManager : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ALocationManager();

protected:

	virtual void BeginPlay() override;
	virtual void EndPlay( const EEndPlayReason::Type EndPlayReason ) override;

public:	
	
	virtual void Tick( float DeltaTime ) override;

	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	TArray<TSubclassOf<ABaseMapLocation>>MapLocations;

	UPROPERTY()
	ABaseMapLocation* Spawn								{ nullptr };



private:
	
	UFUNCTION()
	void SpawnStartLocation();
	
	UFUNCTION()
	void SpawnRandomLocations( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );
};
