// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/Phantom/PhantomPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhantomPart() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPart_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPart();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_ABodyPart();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPart_PhantomMaterialUpdater();
// End Cross Module References
	static FName NAME_APhantomPart_PhantomMaterialUpdater = FName(TEXT("PhantomMaterialUpdater"));
	void APhantomPart::PhantomMaterialUpdater()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomPart_PhantomMaterialUpdater),NULL);
	}
	void APhantomPart::StaticRegisterNativesAPhantomPart()
	{
		UClass* Class = APhantomPart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PhantomMaterialUpdater", &APhantomPart::execPhantomMaterialUpdater },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APhantomPart_PhantomMaterialUpdater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPart, "PhantomMaterialUpdater", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhantomPart_NoRegister()
	{
		return APhantomPart::StaticClass();
	}
	UClass* Z_Construct_UClass_APhantomPart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABodyPart,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APhantomPart_PhantomMaterialUpdater, "PhantomMaterialUpdater" }, // 4232461094
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Pawn/Phantom/PhantomPart.h" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPart.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APhantomPart>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APhantomPart::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(APhantomPart, 1733844044);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhantomPart(Z_Construct_UClass_APhantomPart, &APhantomPart::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("APhantomPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
