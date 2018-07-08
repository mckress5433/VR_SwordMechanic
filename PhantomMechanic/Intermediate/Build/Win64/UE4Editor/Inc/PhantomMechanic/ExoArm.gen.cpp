// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/ExoBody/ExoArm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExoArm() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoArm_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoArm();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_AExoPart();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
// End Cross Module References
	void AExoArm::StaticRegisterNativesAExoArm()
	{
	}
	UClass* Z_Construct_UClass_AExoArm_NoRegister()
	{
		return AExoArm::StaticClass();
	}
	UClass* Z_Construct_UClass_AExoArm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AExoPart,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Pawn/ExoBody/ExoArm.h" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoArm.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExoArm>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExoArm::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AExoArm, 1146810684);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExoArm(Z_Construct_UClass_AExoArm, &AExoArm::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("AExoArm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExoArm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
