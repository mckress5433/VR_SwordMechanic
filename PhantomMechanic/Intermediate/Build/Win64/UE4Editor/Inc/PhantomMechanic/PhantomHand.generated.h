// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHANTOMMECHANIC_PhantomHand_generated_h
#error "PhantomHand.generated.h already included, missing '#pragma once' in PhantomHand.h"
#endif
#define PHANTOMMECHANIC_PhantomHand_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_RPC_WRAPPERS \
	virtual void InputAxisLoco_Implementation(); \
	virtual void TeleportLoco_Implementation(); \
	virtual void CoupleHands_Implementation(); \
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
	} \
 \
	DECLARE_FUNCTION(execCoupleHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CoupleHands_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InputAxisLoco_Implementation(); \
	virtual void TeleportLoco_Implementation(); \
	virtual void CoupleHands_Implementation(); \
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
	} \
 \
	DECLARE_FUNCTION(execCoupleHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CoupleHands_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_EVENT_PARMS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_CALLBACK_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhantomHand(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_APhantomHand(); \
public: \
	DECLARE_CLASS(APhantomHand, APhantomPart, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(APhantomHand) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPhantomHand(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_APhantomHand(); \
public: \
	DECLARE_CLASS(APhantomHand, APhantomPart, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(APhantomHand) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhantomHand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhantomHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomHand(APhantomHand&&); \
	NO_API APhantomHand(const APhantomHand&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomHand(APhantomHand&&); \
	NO_API APhantomHand(const APhantomHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomHand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhantomHand)


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_14_PROLOG \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_EVENT_PARMS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomHand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
