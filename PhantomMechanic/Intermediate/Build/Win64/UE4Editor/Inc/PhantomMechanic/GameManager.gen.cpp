// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Framework/GameManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	PHANTOMMECHANIC_API UEnum* Z_Construct_UEnum_PhantomMechanic_EGameModeEnum();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_UGameManager_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_UGameManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_UGameManager_setGameMode();
// End Cross Module References
	static UEnum* EGameModeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhantomMechanic_EGameModeEnum, Z_Construct_UPackage__Script_PhantomMechanic(), TEXT("EGameModeEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameModeEnum(EGameModeEnum_StaticEnum, TEXT("/Script/PhantomMechanic"), TEXT("EGameModeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhantomMechanic_EGameModeEnum_CRC() { return 2759617048U; }
	UEnum* Z_Construct_UEnum_PhantomMechanic_EGameModeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhantomMechanic();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameModeEnum"), 0, Get_Z_Construct_UEnum_PhantomMechanic_EGameModeEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameModeEnum::GM_Base", (int64)EGameModeEnum::GM_Base },
				{ "EGameModeEnum::GM_Debug", (int64)EGameModeEnum::GM_Debug },
				{ "EGameModeEnum::GM_Demo", (int64)EGameModeEnum::GM_Demo },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GM_Base.DisplayName", "Base Mode" },
				{ "GM_Debug.DisplayName", "Debug Mode" },
				{ "GM_Demo.DisplayName", "Demo Mode" },
				{ "ModuleRelativePath", "Framework/GameManager.h" },
				{ "ToolTip", "//Must be included." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhantomMechanic,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameModeEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameModeEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UGameManager_setGameMode = FName(TEXT("setGameMode"));
	void UGameManager::setGameMode(EGameModeEnum selectedGameMode)
	{
		GameManager_eventsetGameMode_Parms Parms;
		Parms.selectedGameMode=selectedGameMode;
		ProcessEvent(FindFunctionChecked(NAME_UGameManager_setGameMode),&Parms);
	}
	void UGameManager::StaticRegisterNativesUGameManager()
	{
		UClass* Class = UGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setGameMode", &UGameManager::execsetGameMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameManager_setGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_selectedGameMode = { UE4CodeGen_Private::EPropertyClass::Enum, "selectedGameMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameManager_eventsetGameMode_Parms, selectedGameMode), Z_Construct_UEnum_PhantomMechanic_EGameModeEnum, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_selectedGameMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_selectedGameMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_selectedGameMode_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Framework/GameManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, "setGameMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(GameManager_eventsetGameMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameManager_NoRegister()
	{
		return UGameManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameManager_setGameMode, "setGameMode" }, // 3419471046
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Framework/GameManager.h" },
				{ "ModuleRelativePath", "Framework/GameManager.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameManager, 2072209023);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameManager(Z_Construct_UClass_UGameManager, &UGameManager::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("UGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
