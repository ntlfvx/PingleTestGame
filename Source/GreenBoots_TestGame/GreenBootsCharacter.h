// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "GreenBootsCharacter.generated.h"

UCLASS()
class GREENBOOTS_TESTGAME_API AGreenBootsCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	AGreenBootsCharacter();

protected:

	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
	


private:
	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"), BlueprintReadWrite)
	class UCameraComponent* Camera;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	

	

};
