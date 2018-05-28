// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/ExoBody/ExoPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExoPart() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoPart_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoPart();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_ABodyPart();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_AExoPart_OnExoHit();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_AExoPart_UpdateExoMaterial();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_AExoPart_OnExoHit = FName(TEXT("OnExoHit"));
	void AExoPart::OnExoHit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExoPart_OnExoHit),NULL);
	}
	static FName NAME_AExoPart_UpdateExoMaterial = FName(TEXT("UpdateExoMaterial"));
	void AExoPart::UpdateExoMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExoPart_UpdateExoMaterial),NULL);
	}
	void AExoPart::StaticRegisterNativesAExoPart()
	{
		UClass* Class = AExoPart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExoHit", &AExoPart::execOnExoHit },
			{ "UpdateExoMaterial", &AExoPart::execUpdateExoMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AExoPart_OnExoHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AExoPart, "OnExoHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AExoPart_UpdateExoMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AExoPart, "UpdateExoMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExoPart_NoRegister()
	{
		return AExoPart::StaticClass();
	}
	UClass* Z_Construct_UClass_AExoPart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ABodyPart,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AExoPart_OnExoHit, "OnExoHit" }, // 3949618438
				{ &Z_Construct_UFunction_AExoPart_UpdateExoMaterial, "UpdateExoMaterial" }, // 4013592948
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Pawn/ExoBody/ExoPart.h" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColliderPhysicalInteraction_MetaData[] = {
				{ "Category", "ExoPart" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColliderPhysicalInteraction = { UE4CodeGen_Private::EPropertyClass::Object, "ColliderPhysicalInteraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AExoPart, ColliderPhysicalInteraction), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_ColliderPhysicalInteraction_MetaData, ARRAY_COUNT(NewProp_ColliderPhysicalInteraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecouplingThreshold_MetaData[] = {
				{ "Category", "ExoPart" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecouplingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "DecouplingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AExoPart, DecouplingThreshold), METADATA_PARAMS(NewProp_DecouplingThreshold_MetaData, ARRAY_COUNT(NewProp_DecouplingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouplingThreshold_MetaData[] = {
				{ "Category", "ExoPart" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CouplingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "CouplingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AExoPart, CouplingThreshold), METADATA_PARAMS(NewProp_CouplingThreshold_MetaData, ARRAY_COUNT(NewProp_CouplingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleThreshold_MetaData[] = {
				{ "Category", "ExoPart" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "IdleThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AExoPart, IdleThreshold), METADATA_PARAMS(NewProp_IdleThreshold_MetaData, ARRAY_COUNT(NewProp_IdleThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistRatio_MetaData[] = {
				{ "Category", "ExoPart" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DistRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AExoPart, DistRatio), METADATA_PARAMS(NewProp_DistRatio_MetaData, ARRAY_COUNT(NewProp_DistRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
				{ "Category", "ExoPart" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Float, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AExoPart, Strength), METADATA_PARAMS(NewProp_Strength_MetaData, ARRAY_COUNT(NewProp_Strength_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColliderPhysicalInteraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecouplingThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CouplingThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IdleThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strength,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExoPart>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExoPart::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExoPart, 1777159085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExoPart(Z_Construct_UClass_AExoPart, &AExoPart::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("AExoPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExoPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
