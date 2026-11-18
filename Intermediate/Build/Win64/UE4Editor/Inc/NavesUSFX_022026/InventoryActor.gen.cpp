// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_022026/InventoryActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryActor() {}
// Cross Module References
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AInventoryActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_022026();
// End Cross Module References
	void AInventoryActor::StaticRegisterNativesAInventoryActor()
	{
	}
	UClass* Z_Construct_UClass_AInventoryActor_NoRegister()
	{
		return AInventoryActor::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NombreObjeto_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NombreObjeto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimularFisica_MetaData[];
#endif
		static void NewProp_bSimularFisica_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimularFisica;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_022026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Objeto que se puede recoger y guardar en un inventario (receta \"Creating an InventoryComponent\n * for an RPG\", cap. 4 del libro). Cuando esta en el mundo es un actor con fisica; al recogerlo\n * se oculta y deja de interactuar; al soltarlo vuelve a aparecer en el lugar indicado.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "InventoryActor.h" },
		{ "ModuleRelativePath", "InventoryActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Objeto que se puede recoger y guardar en un inventario (receta \"Creating an InventoryComponent\nfor an RPG\", cap. 4 del libro). Cuando esta en el mundo es un actor con fisica; al recogerlo\nse oculta y deja de interactuar; al soltarlo vuelve a aparecer en el lugar indicado." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::NewProp_NombreObjeto_MetaData[] = {
		{ "Category", "Inventario" },
		{ "Comment", "// Nombre que se muestra en pantalla\n" },
		{ "ModuleRelativePath", "InventoryActor.h" },
		{ "ToolTip", "Nombre que se muestra en pantalla" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_NombreObjeto = { "NombreObjeto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryActor, NombreObjeto), METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::NewProp_NombreObjeto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::NewProp_NombreObjeto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::NewProp_bSimularFisica_MetaData[] = {
		{ "Category", "Inventario" },
		{ "Comment", "// Si es true el objeto cae y rueda por el escenario (necesita un piso con colision)\n" },
		{ "ModuleRelativePath", "InventoryActor.h" },
		{ "ToolTip", "Si es true el objeto cae y rueda por el escenario (necesita un piso con colision)" },
	};
#endif
	void Z_Construct_UClass_AInventoryActor_Statics::NewProp_bSimularFisica_SetBit(void* Obj)
	{
		((AInventoryActor*)Obj)->bSimularFisica = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInventoryActor_Statics::NewProp_bSimularFisica = { "bSimularFisica", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInventoryActor), &Z_Construct_UClass_AInventoryActor_Statics::NewProp_bSimularFisica_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::NewProp_bSimularFisica_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::NewProp_bSimularFisica_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_NombreObjeto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryActor_Statics::NewProp_bSimularFisica,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventoryActor_Statics::ClassParams = {
		&AInventoryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInventoryActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventoryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventoryActor, 1779098908);
	template<> NAVESUSFX_022026_API UClass* StaticClass<AInventoryActor>()
	{
		return AInventoryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventoryActor(Z_Construct_UClass_AInventoryActor, &AInventoryActor::StaticClass, TEXT("/Script/NavesUSFX_022026"), TEXT("AInventoryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
