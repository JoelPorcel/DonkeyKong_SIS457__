// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma_inclinada.h"

// Sets default values
APlataforma_inclinada::APlataforma_inclinada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//creacion del componente malla y asignacion 
	plataforma_inclinada = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("plataforma_inclinada"));
	//establece el componenete raiz de la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	//controla con el if que se halla encontrado la malla en este caso marcara true de ser asi
	if (CubeMeshAsset.Succeeded())
	{
		//SetStaticMesh() asigna una malla estatica a la instancia
		//CubeMeshAsset.Object obtiene el objeto malla y lo asigna a la instancia
		plataforma_inclinada->SetStaticMesh(CubeMeshAsset.Object);
	}
	//Habitar fisicas de  la instancia
	plataforma_inclinada->SetSimulatePhysics(false);
	//Modifica la forma del objeto
	plataforma_inclinada->SetWorldScale3D(FVector(1.0f, 3.0f, 0.5f));
	//Cambia el angulo del objeto (y,z,x)
	plataforma_inclinada->SetRelativeRotation(FRotator(0.0f, 0.0f, 25.0f));
	//Hacer invisible el objeto
	plataforma_inclinada->SetVisibility(true);

}

// Called when the game starts or when spawned
void APlataforma_inclinada::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlataforma_inclinada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

