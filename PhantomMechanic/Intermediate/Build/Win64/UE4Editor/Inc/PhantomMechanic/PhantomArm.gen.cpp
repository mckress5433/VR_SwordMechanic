// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/Phantom/PhantomArm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhantomArm() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomArm_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomArm();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPart();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
// End Cross Module References
	void APhantomArm::StaticRegisterNativesAPhantomArm()
	{
	}
	UClass* Z_Construct_UClass_APhantomArm_NoRegister()
	{
		return APhantomArm::StaticClass();
	}
	UClass* Z_Construct_UClass_APhantomArm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APhantomPart,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Pawn/Phantom/PhantomArm.h" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomArm.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APhantomArm>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APhantomArm::StaticClass,
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
	IMPLEMENT_CLASS(APhantomArm, 2945016025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhantomArm(Z_Construct_UClass_APhantomArm, &APhantomArm::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("APhantomArm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomArm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
