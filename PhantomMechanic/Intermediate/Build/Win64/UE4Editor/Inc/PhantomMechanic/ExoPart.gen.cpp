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
// End Cross Module References
	void AExoPart::StaticRegisterNativesAExoPart()
	{
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Pawn/ExoBody/ExoPart.h" },
				{ "ModuleRelativePath", "Pawn/ExoBody/ExoPart.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExoPart>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExoPart::StaticClass,
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
	IMPLEMENT_CLASS(AExoPart, 3550924038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExoPart(Z_Construct_UClass_AExoPart, &AExoPart::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("AExoPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExoPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
