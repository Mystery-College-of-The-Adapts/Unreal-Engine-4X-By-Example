// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "BMBossCharacter.generated.h"

UCLASS()
class BOSSMODEREMAKE_API ABMBossCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABMBossCharacter();

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintPure, Category = AI)
	const float GetHealth();

	UPROPERTY(EditAnywhere, Category = Pawn)
	class UBehaviorTree* BehaviourTree;

private:

	UPROPERTY()
	float Health;
	
};
