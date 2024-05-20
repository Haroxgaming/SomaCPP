// Fill out your copyright notice in the Description page of Project Settings.


#include "soma/Public/Upgrader.h"
#include "Kismet/GameplayStatics.h"
#include "soma/somaCharacter.h"

// Sets default values
AUpgrader::AUpgrader()
{
	{
		Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Patrick"));
		SetRootComponent(Mesh);
	
		// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;

	}
}

void AUpgrader::InteractInterface_Implementation()
{
	if(AsomaCharacter* PlayerRef = Cast<AsomaCharacter>(UGameplayStatics::GetPlayerCharacter(this,0)))
	{
		if(PlayerRef->Omnitool==1)
		{
			PlayerRef->Omnitool=2;
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("OmniTool Upgrade"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("OmniTool Max level"));
		}
	}
}



// Called when the game starts or when spawned
void AUpgrader::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AUpgrader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

