// Fill out your copyright notice in the Description page of Project Settings.


#include "Elevator.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "soma/somaCharacter.h"

// Sets default values
AElevator::AElevator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AElevator::InteractInterface_Implementation()
{
	if(AsomaCharacter* PlayerRef = Cast<AsomaCharacter>(UGameplayStatics::GetPlayerCharacter(this,0)))
	{
		if(PlayerRef->Omnitool==1)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("OmniTool Need Upgrade"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Elevator go up"));
			Execute_ElevatorUp(this);
		}
	}
}

// Called when the game starts or when spawned
void AElevator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElevator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}