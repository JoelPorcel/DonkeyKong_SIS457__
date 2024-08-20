// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma_inclinada.generated.h"

UCLASS()
class DONKEYKONG_USFX_API APlataforma_inclinada : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma_inclinada();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(VisibleAnywhere, Category = "Cubo")
	//declaracion de un puntero a un componente malla
	class UStaticMeshComponent* plataforma_inclinada;

};
