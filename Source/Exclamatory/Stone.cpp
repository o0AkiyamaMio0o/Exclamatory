// Fill out your copyright notice in the Description page of Project Settings.

#include "Stone.h"

// Sets default values
AStone::AStone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AStone::~AStone() {
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("~Stone()")));
	}
}

// Called when the game starts or when spawned
void AStone::BeginPlay()
{
	Super::BeginPlay();
	
	GenerateMesh();
}

// Called every frame
void AStone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void AStone::ChangeType(StoneType targetType) {
//	ChangeStoneShape(targetType);
//
//
//}
