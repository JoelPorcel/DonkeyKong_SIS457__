// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/Plataforma_inclinada.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataforma_inclinada() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_APlataforma_inclinada_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_APlataforma_inclinada();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void APlataforma_inclinada::StaticRegisterNativesAPlataforma_inclinada()
	{
	}
	UClass* Z_Construct_UClass_APlataforma_inclinada_NoRegister()
	{
		return APlataforma_inclinada::StaticClass();
	}
	struct Z_Construct_UClass_APlataforma_inclinada_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataforma_inclinada_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataforma_inclinada_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Plataforma_inclinada.h" },
		{ "ModuleRelativePath", "Plataforma_inclinada.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataforma_inclinada_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataforma_inclinada>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataforma_inclinada_Statics::ClassParams = {
		&APlataforma_inclinada::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlataforma_inclinada_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataforma_inclinada_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataforma_inclinada()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataforma_inclinada_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataforma_inclinada, 2479757632);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<APlataforma_inclinada>()
	{
		return APlataforma_inclinada::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataforma_inclinada(Z_Construct_UClass_APlataforma_inclinada, &APlataforma_inclinada::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("APlataforma_inclinada"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataforma_inclinada);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
