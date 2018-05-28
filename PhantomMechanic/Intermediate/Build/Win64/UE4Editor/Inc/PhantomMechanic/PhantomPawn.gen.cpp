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
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_AnimationSync();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_InputAxisLoco();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_PossessExoBody();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_TeleportLoco();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_APhantomPawn_AnimationSync = FName(TEXT("AnimationSync"));
	void APhantomPawn::AnimationSync()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomPawn_AnimationSync),NULL);
	}
	static FName NAME_APhantomPawn_InputAxisLoco = FName(TEXT("InputAxisLoco"));
	void APhantomPawn::InputAxisLoco()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomPawn_InputAxisLoco),NULL);
	}
	static FName NAME_APhantomPawn_PossessExoBody = FName(TEXT("PossessExoBody"));
	void APhantomPawn::PossessExoBody()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomPawn_PossessExoBody),NULL);
	}
	static FName NAME_APhantomPawn_TeleportLoco = FName(TEXT("TeleportLoco"));
	void APhantomPawn::TeleportLoco()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhantomPawn_TeleportLoco),NULL);
	}
	void APhantomPawn::StaticRegisterNativesAPhantomPawn()
	{
		UClass* Class = APhantomPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimationSync", &APhantomPawn::execAnimationSync },
			{ "InputAxisLoco", &APhantomPawn::execInputAxisLoco },
			{ "PossessExoBody", &APhantomPawn::execPossessExoBody },
			{ "TeleportLoco", &APhantomPawn::execTeleportLoco },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APhantomPawn_AnimationSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, "AnimationSync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APhantomPawn_InputAxisLoco()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, "InputAxisLoco", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APhantomPawn_PossessExoBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, "PossessExoBody", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APhantomPawn_TeleportLoco()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ToolTip", "Originally an AActor may need to be that..." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomPawn, "TeleportLoco", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APhantomPawn_AnimationSync, "AnimationSync" }, // 1937436238
				{ &Z_Construct_UFunction_APhantomPawn_InputAxisLoco, "InputAxisLoco" }, // 162267553
				{ &Z_Construct_UFunction_APhantomPawn_PossessExoBody, "PossessExoBody" }, // 1528591862
				{ &Z_Construct_UFunction_APhantomPawn_TeleportLoco, "TeleportLoco" }, // 2107934937
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attached_ExoBody_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attached_ExoBody = { UE4CodeGen_Private::EPropertyClass::Object, "Attached_ExoBody", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, Attached_ExoBody), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Attached_ExoBody_MetaData, ARRAY_COUNT(NewProp_Attached_ExoBody_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomLegs_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomLegs = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomLegs", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomLegs), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomLegs_MetaData, ARRAY_COUNT(NewProp_PhantomLegs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomHip_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomHip = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomHip", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomHip), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomHip_MetaData, ARRAY_COUNT(NewProp_PhantomHip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomArmRight_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomArmRight = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomArmRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomArmRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomArmRight_MetaData, ARRAY_COUNT(NewProp_PhantomArmRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomArmLeft_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomArmLeft = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomArmLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomArmLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomArmLeft_MetaData, ARRAY_COUNT(NewProp_PhantomArmLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomHandRight_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomHandRight = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomHandRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomHandRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomHandRight_MetaData, ARRAY_COUNT(NewProp_PhantomHandRight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomHandLeft_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomHandLeft = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomHandLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomHandLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomHandLeft_MetaData, ARRAY_COUNT(NewProp_PhantomHandLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomTorso_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomTorso = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomTorso", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomTorso), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomTorso_MetaData, ARRAY_COUNT(NewProp_PhantomTorso_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomHead_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomHead = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomHead", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomHead), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_PhantomHead_MetaData, ARRAY_COUNT(NewProp_PhantomHead_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Attached_ExoBody,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomLegs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomHip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomArmRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomArmLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomHandRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomHandLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomTorso,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomHead,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APhantomPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APhantomPawn::StaticClass,
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
	IMPLEMENT_CLASS(APhantomPawn, 3936243247);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhantomPawn(Z_Construct_UClass_APhantomPawn, &APhantomPawn::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("APhantomPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
