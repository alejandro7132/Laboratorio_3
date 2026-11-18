// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_022026/NavesUSFX_022026GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesUSFX_022026GameMode() {}
// Cross Module References
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode_NoRegister();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_022026();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
// End Cross Module References
	void ANavesUSFX_022026GameMode::StaticRegisterNativesANavesUSFX_022026GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode_NoRegister()
	{
		return ANavesUSFX_022026GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CantidadEnemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CantidadEnemigos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentroZona_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CentroZona;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtensionZona_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtensionZona;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMinima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMinima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMaxima_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMaxima;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CantidadObjetos_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CantidadObjetos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CentroObjetos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CentroObjetos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtensionObjetos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtensionObjetos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemigos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemigos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objetos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objetos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objetos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_022026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesUSFX_022026GameMode.h" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadEnemigos_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "Comment", "// Cuantos enemigos se colocan en la escena al empezar\n" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ToolTip", "Cuantos enemigos se colocan en la escena al empezar" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadEnemigos = { "CantidadEnemigos", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, CantidadEnemigos), METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadEnemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadEnemigos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroZona_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "Comment", "// Zona del escenario donde aparecen y por donde se mueven (centro y mitad del tamano en cada eje)\n" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ToolTip", "Zona del escenario donde aparecen y por donde se mueven (centro y mitad del tamano en cada eje)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroZona = { "CentroZona", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, CentroZona), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroZona_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroZona_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionZona_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionZona = { "ExtensionZona", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, ExtensionZona), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionZona_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionZona_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMinima_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "Comment", "// Cada enemigo recibe una velocidad al azar entre estos dos valores (cm/s)\n" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ToolTip", "Cada enemigo recibe una velocidad al azar entre estos dos valores (cm/s)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMinima = { "VelocidadMinima", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, VelocidadMinima), METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMinima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMinima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMaxima_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMaxima = { "VelocidadMaxima", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, VelocidadMaxima), METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMaxima_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMaxima_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadObjetos_MetaData[] = {
		{ "Category", "Inventario" },
		{ "Comment", "// Cuantos objetos recogibles se colocan en la escena al empezar\n" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ToolTip", "Cuantos objetos recogibles se colocan en la escena al empezar" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadObjetos = { "CantidadObjetos", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, CantidadObjetos), METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadObjetos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadObjetos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroObjetos_MetaData[] = {
		{ "Category", "Inventario" },
		{ "Comment", "// Zona donde aparecen los objetos (centro y mitad del tamano en cada eje)\n" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ToolTip", "Zona donde aparecen los objetos (centro y mitad del tamano en cada eje)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroObjetos = { "CentroObjetos", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, CentroObjetos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroObjetos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroObjetos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionObjetos_MetaData[] = {
		{ "Category", "Inventario" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionObjetos = { "ExtensionObjetos", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, ExtensionObjetos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionObjetos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionObjetos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_Inner = { "Enemigos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_MetaData[] = {
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos = { "Enemigos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, Enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Objetos_Inner = { "Objetos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Objetos_MetaData[] = {
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Objetos = { "Objetos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, Objetos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Objetos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Objetos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadEnemigos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroZona,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionZona,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMinima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_VelocidadMaxima,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CantidadObjetos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_CentroObjetos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_ExtensionObjetos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Objetos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Objetos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesUSFX_022026GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::ClassParams = {
		&ANavesUSFX_022026GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesUSFX_022026GameMode, 2922065483);
	template<> NAVESUSFX_022026_API UClass* StaticClass<ANavesUSFX_022026GameMode>()
	{
		return ANavesUSFX_022026GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesUSFX_022026GameMode(Z_Construct_UClass_ANavesUSFX_022026GameMode, &ANavesUSFX_022026GameMode::StaticClass, TEXT("/Script/NavesUSFX_022026"), TEXT("ANavesUSFX_022026GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesUSFX_022026GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
