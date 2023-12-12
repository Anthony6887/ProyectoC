// Fill out your copyright notice in the Description page of Project Settings.


#include "Tuto.h"

// Sets default values
ATuto::ATuto()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATuto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATuto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATuto::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

