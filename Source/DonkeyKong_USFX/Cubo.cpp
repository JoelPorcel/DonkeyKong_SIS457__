// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubo.h"

// Asignacion de la malla en el constructor para que este listo para usarce
ACubo::ACubo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//creacion del componente malla y asignacion 
	cubo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cubo"));
	//establece el componenete raiz de la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	//controla con el if que se halla encontrado la malla en este caso marcara true de ser asi
	if (CubeMeshAsset.Succeeded())
	{
		//SetStaticMesh() asigna una malla estatica a la instancia
		//CubeMeshAsset.Object obtiene el objeto malla y lo asigna a la instancia
		cubo->SetStaticMesh(CubeMeshAsset.Object);
	}
	//Habitar fisicas de  la instancia
	cubo->SetSimulatePhysics(false);
	//Modifica la forma del objeto
	//cubo->SetWorldScale3D(FVector(1.0f, 3.0f, 1.0f));
	//Cambia el angulo del objeto (y,z,x)
	//cubo->SetRelativeRotation(FRotator(0.0f, 0.0f, 150.0f));
	//Hacer invisible el objeto
	cubo->SetVisibility(true);
}

// Called when the game starts or when spawned
void ACubo::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACubo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

