// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cubo.h"
#include "Plataforma.h"
#include "Plataforma_inclinada.h"
#include "DonkeyKong_USFXGameMode.h"
#include "DonkeyKong_USFXCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_USFXGameMode::ADonkeyKong_USFXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkeyKong_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	ACubo* cubo1 = GetWorld()->SpawnActor<ACubo>(ACubo::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	ACubo* cubo2 = GetWorld()->SpawnActor<ACubo>(ACubo::StaticClass(), FVector(1206.68f, 480.0f, 800.0f), FRotator::ZeroRotator);
	APlataforma* p1 = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), FVector(1206.68f, -1130.0f, 740.0f), FRotator::ZeroRotator);
	APlataforma* p2 = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), FVector(1206.68f, 1050.0f, 1050.0f), FRotator::ZeroRotator);
	APlataforma_inclinada* pi1 = GetWorld()->SpawnActor<APlataforma_inclinada>(APlataforma_inclinada::StaticClass(), FVector(1206.68f, 570.0f, 1260.0f), FRotator::ZeroRotator);
}