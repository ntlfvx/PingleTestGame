// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "BaseMapLocation.generated.h"


UCLASS()
class GREENBOOTS_TESTGAME_API ABaseMapLocation : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ABaseMapLocation();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* Trigger			{ nullptr };

private:

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* BaseMesh	{ nullptr };

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* Root				{ nullptr };

};
