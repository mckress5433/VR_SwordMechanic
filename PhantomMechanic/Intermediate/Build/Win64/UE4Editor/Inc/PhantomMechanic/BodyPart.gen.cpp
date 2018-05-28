// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pawn/BodyPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyPart() {}
// Cross Module References
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_ABodyPart_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_ABodyPart();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ABodyPart::StaticRegisterNativesABodyPart()
	{
	}
	UClass* Z_Construct_UClass_ABodyPart_NoRegister()
	{
		return ABodyPart::StaticClass();
	}
	UClass* Z_Construct_UClass_ABodyPart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_PhantomMechanic,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Pawn/BodyPart.h" },
				{ "ModuleRelativePath", "Pawn/BodyPart.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
				{ "Category", "BodyPart" },
				{ "ModuleRelativePath", "Pawn/BodyPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass = { UE4CodeGen_Private::EPropertyClass::Float, "Mass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ABodyPart, Mass), METADATA_PARAMS(NewProp_Mass_MetaData, ARRAY_COUNT(NewProp_Mass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
				{ "Category", "BodyPart" },
				{ "ModuleRelativePath", "Pawn/BodyPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Float, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABodyPart, Velocity), METADATA_PARAMS(NewProp_Velocity_MetaData, ARRAY_COUNT(NewProp_Velocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdCollider_MetaData[] = {
				{ "Category", "BodyPart" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/BodyPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThresholdCollider = { UE4CodeGen_Private::EPropertyClass::Object, "ThresholdCollider", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ABodyPart, ThresholdCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_ThresholdCollider_MetaData, ARRAY_COUNT(NewProp_ThresholdCollider_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
				{ "Category", "BodyPart" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/BodyPart.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ABodyPart, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(NewProp_SkeletalMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Velocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThresholdCollider,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABodyPart>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABodyPart::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ABodyPart, 1031780007);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABodyPart(Z_Construct_UClass_ABodyPart, &ABodyPart::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("ABodyPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABodyPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
