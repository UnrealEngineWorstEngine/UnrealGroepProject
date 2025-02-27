// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseWeapon::FireWeapon()
{
	if (Ammo <= 0 && WeaponOverheated == true)
		return;
}

void ABaseWeapon::Overheat()
{
	if (OverHeatCounter >= OverHeatMaximum)
		WeaponOverheated = true;
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

