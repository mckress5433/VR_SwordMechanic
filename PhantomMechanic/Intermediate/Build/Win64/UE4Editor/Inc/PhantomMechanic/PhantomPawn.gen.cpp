// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/Phantom/PhantomPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhantomPawn() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPawn_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPawn();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
// End Cross Module References
	void APhantomPawn::StaticRegisterNativesAPhantomPawn()
	{
	}
	UClass* Z_Construct_UClass_APhantomPawn_NoRegister()
	{
		return APhantomPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_APhantomPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APhantomPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APhantomPawn::StaticClass,
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
	IMPLEMENT_CLASS(APhantomPawn, 3616151900);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhantomPawn(Z_Construct_UClass_APhantomPawn, &APhantomPawn::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("APhantomPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
