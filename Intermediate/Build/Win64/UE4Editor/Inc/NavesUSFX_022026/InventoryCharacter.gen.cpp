// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_022026/InventoryCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryCharacter() {}
// Cross Module References
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AInventoryCharacter_NoRegister();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AInventoryCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_022026();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInventoryCharacter::execDropItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInventoryCharacter::execTakeItem)
	{
		P_GET_OBJECT(AInventoryActor,Z_Param_InventoryItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeItem(Z_Param_InventoryItem);
		P_NATIVE_END;
	}
	void AInventoryCharacter::StaticRegisterNativesAInventoryCharacter()
	{
		UClass* Class = AInventoryCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItem", &AInventoryCharacter::execDropItem },
			{ "TakeItem", &AInventoryCharacter::execTakeItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventario" },
		{ "Comment", "// Suelta el ultimo objeto recogido delante del personaje\n" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
		{ "ToolTip", "Suelta el ultimo objeto recogido delante del personaje" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryCharacter, nullptr, "DropItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInventoryCharacter_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInventoryCharacter_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics
	{
		struct InventoryCharacter_eventTakeItem_Parms
		{
			AInventoryActor* InventoryItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryCharacter_eventTakeItem_Parms, InventoryItem), Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::NewProp_InventoryItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventario" },
		{ "Comment", "// Guarda el objeto en el inventario\n" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
		{ "ToolTip", "Guarda el objeto en el inventario" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventoryCharacter, nullptr, "TakeItem", nullptr, nullptr, sizeof(InventoryCharacter_eventTakeItem_Parms), Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInventoryCharacter_TakeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInventoryCharacter_TakeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInventoryCharacter_NoRegister()
	{
		return AInventoryCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camara_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camara;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_022026,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInventoryCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInventoryCharacter_DropItem, "DropItem" }, // 2518918355
		{ &Z_Construct_UFunction_AInventoryCharacter_TakeItem, "TakeItem" }, // 3513057374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Personaje del jugador con inventario: recoge los AInventoryActor contra los que choca\n * y suelta el ultimo recogido con la tecla Q (accion \"DropItem\").\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InventoryCharacter.h" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
		{ "ToolTip", "Personaje del jugador con inventario: recoge los AInventoryActor contra los que choca\ny suelta el ultimo recogido con la tecla Q (accion \"DropItem\")." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory_MetaData[] = {
		{ "Category", "Inventario" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory = { "MyInventory", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharacter, MyInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_Camara_MetaData[] = {
		{ "Category", "Camara" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InventoryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_Camara = { "Camara", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventoryCharacter, Camara), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_Camara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_Camara_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventoryCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_MyInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventoryCharacter_Statics::NewProp_Camara,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventoryCharacter_Statics::ClassParams = {
		&AInventoryCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInventoryCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventoryCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventoryCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventoryCharacter, 3109969170);
	template<> NAVESUSFX_022026_API UClass* StaticClass<AInventoryCharacter>()
	{
		return AInventoryCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventoryCharacter(Z_Construct_UClass_AInventoryCharacter, &AInventoryCharacter::StaticClass, TEXT("/Script/NavesUSFX_022026"), TEXT("AInventoryCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
