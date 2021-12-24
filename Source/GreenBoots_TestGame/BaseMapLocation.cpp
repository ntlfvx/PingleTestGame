// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseMapLocation.h"
#include "Components/BoxComponent.h"



ABaseMapLocation::ABaseMapLocation()
{
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>( TEXT( "Root" ) );
	SetRootComponent( Root );
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "BaseMesh" ) );
	BaseMesh->SetupAttachment( Root );
	Trigger = CreateDefaultSubobject<UBoxComponent>( TEXT( "TriggerBox" ) );
	Trigger->SetupAttachment( Root );
	Trigger->SetVisibility( true );
}

void ABaseMapLocation::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseMapLocation::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}







