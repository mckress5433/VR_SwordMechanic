// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/Phantom/PhantomHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhantomHand() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomHand_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomHand();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPart();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomHand_CoupleHands();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomHand_InputAxisLoco();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomHand_TeleportLoco();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_APhantomHand_CoupleHands = FName(TEXT("CoupleHands"));
	void APhantomHand::CoupleHands()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomHand_CoupleHands),NULL);
	}
	static FName NAME_APhantomHand_InputAxisLoco = FName(TEXT("InputAxisLoco"));
	void APhantomHand::InputAxisLoco()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomHand_InputAxisLoco),NULL);
	}
	static FName NAME_APhantomHand_TeleportLoco = FName(TEXT("TeleportLoco"));
	void APhantomHand::TeleportLoco()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomHand_TeleportLoco),NULL);
	}
	void APhantomHand::StaticRegisterNativesAPhantomHand()
	{
		UClass* Class = APhantomHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CoupleHands", &APhantomHand::execCoupleHands },
			{ "InputAxisLoco", &APhantomHand::execInputAxisLoco },
			{ "TeleportLoco", &APhantomHand::execTeleportLoco },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APhantomHand_CoupleHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomHand, "CoupleHands", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APhantomHand_InputAxisLoco()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomHand, "InputAxisLoco", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APhantomHand_TeleportLoco()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomHand, "TeleportLoco", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhantomHand_NoRegister()
	{
		return APhantomHand::StaticClass();
	}
	UClass* Z_Construct_UClass_APhantomHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APhantomPart,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APhantomHand_CoupleHands, "CoupleHands" }, // 1890772045
				{ &Z_Construct_UFunction_APhantomHand_InputAxisLoco, "InputAxisLoco" }, // 2866551906
				{ &Z_Construct_UFunction_APhantomHand_TeleportLoco, "TeleportLoco" }, // 3685310176
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Pawn/Phantom/PhantomHand.h" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomHand.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoupleSphere_MetaData[] = {
				{ "Category", "PhantomHand" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoupleSphere = { UE4CodeGen_Private::EPropertyClass::Object, "CoupleSphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(APhantomHand, CoupleSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_CoupleSphere_MetaData, ARRAY_COUNT(NewProp_CoupleSphere_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoupleSphere,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APhantomHand>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APhantomHand::StaticClass,
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
	IMPLEMENT_CLASS(APhantomHand, 3594044176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhantomHand(Z_Construct_UClass_APhantomHand, &APhantomHand::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("APhantomHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
