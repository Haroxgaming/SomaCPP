// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "Components/BoxComponent.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Actor.h"
#include "Elevator.generated.h"

UCLASS(BlueprintType, Category="MyGame")
class AElevator : public AActor, public IInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="Mesh")
	UStaticMeshComponent* Bouton;

	UPROPERTY(EditAnywhere, Category="Mesh")
	UStaticMeshComponent* platform;

public:	
	// Sets default values for this actor's properties
	AElevator();
	virtual void InteractInterface_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
};
