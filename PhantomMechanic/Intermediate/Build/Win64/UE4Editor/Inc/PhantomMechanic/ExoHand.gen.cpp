// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/ExoBody/ExoHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExoHand() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoHand_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoHand();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoPart();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_AExoHand_GrabActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_AExoHand_GrabActor = FName(TEXT("GrabActor"));
	void AExoHand::GrabActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExoHand_GrabActor),NULL);
	}
	void AExoHand::StaticRegisterNativesAExoHand()
	{
		UClass* Class = AExoHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrabActor", &AExoHand::execGrabActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AExoHand_GrabActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AExoHand, "GrabActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExoHand_NoRegister()
	{
		return AExoHand::StaticClass();
	}
	UClass* Z_Construct_UClass_AExoHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AExoPart,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AExoHand_GrabActor, "GrabActor" }, // 1282348266
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Pawn/ExoBody/ExoHand.h" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoHand.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPosition_MetaData[] = {
				{ "Category", "ExoHand" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "HandPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AExoHand, HandPosition), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_HandPosition_MetaData, ARRAY_COUNT(NewProp_HandPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[] = {
				{ "Category", "ExoHand" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedActor = { UE4CodeGen_Private::EPropertyClass::Object, "AttachedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(AExoHand, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_AttachedActor_MetaData, ARRAY_COUNT(NewProp_AttachedActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabSphere_MetaData[] = {
				{ "Category", "ExoHand" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabSphere = { UE4CodeGen_Private::EPropertyClass::Object, "GrabSphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AExoHand, GrabSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_GrabSphere_MetaData, ARRAY_COUNT(NewProp_GrabSphere_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HandPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrabSphere,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExoHand>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExoHand::StaticClass,
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
	IMPLEMENT_CLASS(AExoHand, 3882932936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExoHand(Z_Construct_UClass_AExoHand, &AExoHand::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("AExoHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExoHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
