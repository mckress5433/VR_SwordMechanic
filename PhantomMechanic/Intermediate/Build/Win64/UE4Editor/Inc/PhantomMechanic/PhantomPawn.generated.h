// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHANTOMMECHANIC_PhantomPawn_generated_h
#error "PhantomPawn.generated.h already included, missing '#pragma once' in PhantomPawn.h"
#endif
#define PHANTOMMECHANIC_PhantomPawn_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_RPC_WRAPPERS \
	virtual void PossessExoBody_Implementation(); \
	virtual void AnimationSync_Implementation(); \
	virtual void InputAxisLoco_Implementation(); \
	virtual void TeleportLoco_Implementation(); \
 \
	DECLARE_FUNCTION(execPossessExoBody) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PossessExoBody_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimationSync) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimationSync_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputAxisLoco) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InputAxisLoco_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportLoco) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportLoco_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PossessExoBody_Implementation(); \
	virtual void AnimationSync_Implementation(); \
	virtual void InputAxisLoco_Implementation(); \
	virtual void TeleportLoco_Implementation(); \
 \
	DECLARE_FUNCTION(execPossessExoBody) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PossessExoBody_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimationSync) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimationSync_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputAxisLoco) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InputAxisLoco_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportLoco) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportLoco_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_EVENT_PARMS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_CALLBACK_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhantomPawn(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_APhantomPawn(); \
public: \
	DECLARE_CLASS(APhantomPawn, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(APhantomPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPhantomPawn(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_APhantomPawn(); \
public: \
	DECLARE_CLASS(APhantomPawn, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(APhantomPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhantomPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhantomPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomPawn(APhantomPawn&&); \
	NO_API APhantomPawn(const APhantomPawn&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomPawn(APhantomPawn&&); \
	NO_API APhantomPawn(const APhantomPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhantomPawn)


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_13_PROLOG \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_EVENT_PARMS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
