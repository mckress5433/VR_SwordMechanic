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
	PHANTOMMECHANIC_API UEnum* Z_Construct_UEnum_PhantomMechanic_ELimbSide();
	UPackage* Z_Construct_UPackage__Script_PhantomMechanic();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPawn_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomPawn();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_AnimationSync();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_InputAxisLoco();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_PossessExoBody();
	PHANTOMMECHANIC_API UFunction* Z_Construct_UFunction_APhantomPawn_TeleportLoco();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomHand_NoRegister();
	PHANTOMMECHANIC_API UClass* Z_Construct_UClass_APhantomArm_NoRegister();
// End Cross Module References
	static UEnum* ELimbSide_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PhantomMechanic_ELimbSide, Z_Construct_UPackage__Script_PhantomMechanic(), TEXT("ELimbSide"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELimbSide(ELimbSide_StaticEnum, TEXT("/Script/PhantomMechanic"), TEXT("ELimbSide"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PhantomMechanic_ELimbSide_CRC() { return 3131326075U; }
	UEnum* Z_Construct_UEnum_PhantomMechanic_ELimbSide()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PhantomMechanic();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELimbSide"), 0, Get_Z_Construct_UEnum_PhantomMechanic_ELimbSide_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELimbSide::Left", (int64)ELimbSide::Left },
				{ "ELimbSide::Right", (int64)ELimbSide::Right },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.DisplayName", "Left Side" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "Right.DisplayName", "Right Side" },
				{ "ToolTip", "Move this to Body Part when you can." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PhantomMechanic,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELimbSide",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELimbSide",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
				{ "ToolTip", "UFUNCTION(BlueprintNativeEvent, BlueprintCallable)" },
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
				{ &Z_Construct_UFunction_APhantomPawn_TeleportLoco, "TeleportLoco" }, // 582674943
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Chaperone_MetaData[] = {
				{ "Category", "VR" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Chaperone = { UE4CodeGen_Private::EPropertyClass::Object, "VR_Chaperone", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000009001d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, VR_Chaperone), Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister, METADATA_PARAMS(NewProp_VR_Chaperone_MetaData, ARRAY_COUNT(NewProp_VR_Chaperone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_Right_MetaData[] = {
				{ "Category", "VR" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController_Right = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController_Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000009001d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, MotionController_Right), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_MotionController_Right_MetaData, ARRAY_COUNT(NewProp_MotionController_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_Left_MetaData[] = {
				{ "Category", "VR" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ToolTip", "Maybe put these in phantom hand instead?" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController_Left = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController_Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000009001d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, MotionController_Left), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_MotionController_Left_MetaData, ARRAY_COUNT(NewProp_MotionController_Left_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRollToRotate_MetaData[] = {
				{ "Category", "VR" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ToolTip", "Not sure if posible to use just yet." },
			};
#endif
			auto NewProp_bUseControllerRollToRotate_SetBit = [](void* Obj){ ((APhantomPawn*)Obj)->bUseControllerRollToRotate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRollToRotate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRollToRotate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APhantomPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseControllerRollToRotate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseControllerRollToRotate_MetaData, ARRAY_COUNT(NewProp_bUseControllerRollToRotate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPositionalHeadTracking_MetaData[] = {
				{ "Category", "VR" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"VR\")" },
			};
#endif
			auto NewProp_bPositionalHeadTracking_SetBit = [](void* Obj){ ((APhantomPawn*)Obj)->bPositionalHeadTracking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPositionalHeadTracking = { UE4CodeGen_Private::EPropertyClass::Bool, "bPositionalHeadTracking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APhantomPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPositionalHeadTracking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPositionalHeadTracking_MetaData, ARRAY_COUNT(NewProp_bPositionalHeadTracking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Origin_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Origin = { UE4CodeGen_Private::EPropertyClass::Object, "VR_Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, VR_Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_VR_Origin_MetaData, ARRAY_COUNT(NewProp_VR_Origin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMD_Camera_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HMD_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "HMD_Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(APhantomPawn, HMD_Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_HMD_Camera_MetaData, ARRAY_COUNT(NewProp_HMD_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomHand_Right_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomHand_Right = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomHand_Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomHand_Right), Z_Construct_UClass_APhantomHand_NoRegister, METADATA_PARAMS(NewProp_PhantomHand_Right_MetaData, ARRAY_COUNT(NewProp_PhantomHand_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomHand_Left_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomHand_Left = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomHand_Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomHand_Left), Z_Construct_UClass_APhantomHand_NoRegister, METADATA_PARAMS(NewProp_PhantomHand_Left_MetaData, ARRAY_COUNT(NewProp_PhantomHand_Left_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomArm_Right_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomArm_Right = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomArm_Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomArm_Right), Z_Construct_UClass_APhantomArm_NoRegister, METADATA_PARAMS(NewProp_PhantomArm_Right_MetaData, ARRAY_COUNT(NewProp_PhantomArm_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhantomArm_Left_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhantomArm_Left = { UE4CodeGen_Private::EPropertyClass::Object, "PhantomArm_Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(APhantomPawn, PhantomArm_Left), Z_Construct_UClass_APhantomArm_NoRegister, METADATA_PARAMS(NewProp_PhantomArm_Left_MetaData, ARRAY_COUNT(NewProp_PhantomArm_Left_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerHeight_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPlayerHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultPlayerHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(APhantomPawn, DefaultPlayerHeight), METADATA_PARAMS(NewProp_DefaultPlayerHeight_MetaData, ARRAY_COUNT(NewProp_DefaultPlayerHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeOutDuration_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "fadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(APhantomPawn, fadeOutDuration), METADATA_PARAMS(NewProp_fadeOutDuration_MetaData, ARRAY_COUNT(NewProp_fadeOutDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeInDuration_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ToolTip", "Move to Controller later." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "fadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(APhantomPawn, fadeInDuration), METADATA_PARAMS(NewProp_fadeInDuration_MetaData, ARRAY_COUNT(NewProp_fadeInDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoVR_Mode_MetaData[] = {
				{ "Category", "PhantomPawn" },
				{ "ModuleRelativePath", "Pawn/Phantom/PhantomPawn.h" },
				{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite)" },
			};
#endif
			auto NewProp_NoVR_Mode_SetBit = [](void* Obj){ ((APhantomPawn*)Obj)->NoVR_Mode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NoVR_Mode = { UE4CodeGen_Private::EPropertyClass::Bool, "NoVR_Mode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APhantomPawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NoVR_Mode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_NoVR_Mode_MetaData, ARRAY_COUNT(NewProp_NoVR_Mode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VR_Chaperone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionController_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionController_Left,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseControllerRollToRotate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPositionalHeadTracking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VR_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMD_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomHand_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomHand_Left,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomArm_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhantomArm_Left,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultPlayerHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fadeOutDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fadeInDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoVR_Mode,
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
	IMPLEMENT_CLASS(APhantomPawn, 1237803864);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhantomPawn(Z_Construct_UClass_APhantomPawn, &APhantomPawn::StaticClass, TEXT("/Script/PhantomMechanic"), TEXT("APhantomPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
