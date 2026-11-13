// Fill out your copyright notice in the Description page of Project Settings.


#include "Player1_human.h"

// Sets default values
APlayer1_human::APlayer1_human()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer1_human::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer1_human::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer1_human::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

