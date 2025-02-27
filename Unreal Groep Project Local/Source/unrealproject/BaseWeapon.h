// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class UNREALPROJECT_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void FireWeapon();

	virtual void Overheat();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float Ammo;

	float OverHeatCounter;

	float OverHeatMaximum;

	bool ThisWeaponEquiped;

	bool WeaponOverheated;


};
