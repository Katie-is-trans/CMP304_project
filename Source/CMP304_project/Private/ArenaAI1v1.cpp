// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaAI1v1.h"

void AArenaAI1v1::StartPlay()
{

	Super::StartPlay();

	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Yellow, TEXT("Project running from 16:34"));

}
