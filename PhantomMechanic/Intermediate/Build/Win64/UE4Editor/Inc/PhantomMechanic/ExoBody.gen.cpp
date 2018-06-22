// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/ExoBody/ExoBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExoBody() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoBody_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoBody();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_AExoBody_Coupling();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AExoBody_Coupling = FName(TEXT("Coupling"));
	void AExoBody::Coupling()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExoBody_Coupling),NULL);
	}
	void AExoBody::StaticRegisterNativesAExoBody()
	{
		UClass* Class = AExoBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Coupling", &AExoBody::execCoupling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AExoBody_Coupling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AExoBody, "Coupling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExoBody_NoRegister()
	{
		return AExoBody::StaticClass();
	}
	UClass* Z_Construct_UClass_AExoBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AExoBody_Coupling, "Coupling" }, // 2069167246
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Pawn/ExoBody/ExoBody.h" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoBody.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exo_Origin_MetaData[] = {
				{ "Category", "ExoBody" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Exo_Origin = { UE4CodeGen_Private::EPropertyClass::Object, "Exo_Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AExoBody, Exo_Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Exo_Origin_MetaData, ARRAY_COUNT(NewProp_Exo_Origin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCoupled_MetaData[] = {
				{ "Category", "ExoBody" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoBody.h" },
			};
#endif
			auto NewProp_isCoupled_SetBit = [](void* Obj){ ((AExoBody*)Obj)->isCoupled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCoupled = { UE4CodeGen_Private::EPropertyClass::Bool, "isCoupled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AExoBody), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isCoupled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isCoupled_MetaData, ARRAY_COUNT(NewProp_isCoupled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Exo_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isCoupled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExoBody>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExoBody::StaticClass,
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
	IMPLEMENT_CLASS(AExoBody, 2325294961);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExoBody(Z_Construct_UClass_AExoBody, &AExoBody::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("AExoBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExoBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
