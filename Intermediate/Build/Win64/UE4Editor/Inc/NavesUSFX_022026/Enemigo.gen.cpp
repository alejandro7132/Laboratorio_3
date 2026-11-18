// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_022026/Enemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo() {}
// Cross Module References
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_022026();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemigo::StaticRegisterNativesAEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo_NoRegister()
	{
		return AEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Raiz_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Raiz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaEnemigo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaEnemigo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadGiro_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadGiro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanciaLlegada_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanciaLlegada;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoEspera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoEspera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_022026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Nave enemiga. Se desplaza por el escenario: elige un punto al azar dentro de una\n * zona (caja), vuela hacia el girando la nave, espera un momento al llegar y elige otro.\n */" },
		{ "IncludePath", "Enemigo.h" },
		{ "ModuleRelativePath", "Enemigo.h" },
		{ "ToolTip", "Nave enemiga. Se desplaza por el escenario: elige un punto al azar dentro de una\nzona (caja), vuela hacia el girando la nave, espera un momento al llegar y elige otro." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Statics::NewProp_Raiz_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Raiz = { "Raiz", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo, Raiz), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Statics::NewProp_Raiz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::NewProp_Raiz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo = { "MallaEnemigo", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo, MallaEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Enemigo|Movimiento" },
		{ "Comment", "// Velocidad de desplazamiento (cm/s)\n" },
		{ "ModuleRelativePath", "Enemigo.h" },
		{ "ToolTip", "Velocidad de desplazamiento (cm/s)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Statics::NewProp_VelocidadGiro_MetaData[] = {
		{ "Category", "Enemigo|Movimiento" },
		{ "Comment", "// Velocidad de giro hacia el destino (grados/s)\n" },
		{ "ModuleRelativePath", "Enemigo.h" },
		{ "ToolTip", "Velocidad de giro hacia el destino (grados/s)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_VelocidadGiro = { "VelocidadGiro", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo, VelocidadGiro), METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Statics::NewProp_VelocidadGiro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::NewProp_VelocidadGiro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaLlegada_MetaData[] = {
		{ "Category", "Enemigo|Movimiento" },
		{ "Comment", "// A que distancia del destino (cm) se considera que ya llego\n" },
		{ "ModuleRelativePath", "Enemigo.h" },
		{ "ToolTip", "A que distancia del destino (cm) se considera que ya llego" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaLlegada = { "DistanciaLlegada", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo, DistanciaLlegada), METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaLlegada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaLlegada_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo_Statics::NewProp_TiempoEspera_MetaData[] = {
		{ "Category", "Enemigo|Movimiento" },
		{ "Comment", "// Segundos que espera al llegar a un destino antes de ir al siguiente\n" },
		{ "ModuleRelativePath", "Enemigo.h" },
		{ "ToolTip", "Segundos que espera al llegar a un destino antes de ir al siguiente" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_TiempoEspera = { "TiempoEspera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigo, TiempoEspera), METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Statics::NewProp_TiempoEspera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::NewProp_TiempoEspera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Raiz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_MallaEnemigo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_VelocidadGiro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaLlegada,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_TiempoEspera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Statics::ClassParams = {
		&AEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo, 2402641975);
	template<> NAVESUSFX_022026_API UClass* StaticClass<AEnemigo>()
	{
		return AEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo(Z_Construct_UClass_AEnemigo, &AEnemigo::StaticClass, TEXT("/Script/NavesUSFX_022026"), TEXT("AEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
