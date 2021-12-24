// Fill out your copyright notice in the Description page of Project Settings.


#include "GreenBootsCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


AGreenBootsCharacter::AGreenBootsCharacter()
{

	SpringArm = CreateDefaultSubobject<USpringArmComponent>( TEXT( "SpringArm" ) ) ;
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 600.f;
	SpringArm->SocketOffset = FVector(0.f,0.f,75.f);
	SpringArm->SetRelativeRotation(FRotator(0.f,180.f,0.f));
	SpringArm->SetUsingAbsoluteRotation(true);
	
	Camera=	CreateDefaultSubobject<UCameraComponent>( TEXT( "Camera" ) );
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;
	
}


void AGreenBootsCharacter::BeginPlay()
{
	Super::BeginPlay();
}


void AGreenBootsCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AGreenBootsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}



