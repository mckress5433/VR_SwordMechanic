// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHANTOMMECHANIC_ExoPart_generated_h
#error "ExoPart.generated.h already included, missing '#pragma once' in ExoPart.h"
#endif
#define PHANTOMMECHANIC_ExoPart_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_RPC_WRAPPERS \
	virtual void OnExoHit_Implementation(); \
	virtual void UpdateExoMaterial_Implementation(); \
 \
	DECLARE_FUNCTION(execOnExoHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExoHit_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateExoMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateExoMaterial_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnExoHit_Implementation(); \
	virtual void UpdateExoMaterial_Implementation(); \
 \
	DECLARE_FUNCTION(execOnExoHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExoHit_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateExoMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateExoMaterial_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_EVENT_PARMS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_CALLBACK_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExoPart(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AExoPart(); \
public: \
	DECLARE_CLASS(AExoPart, ABodyPart, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AExoPart) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAExoPart(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AExoPart(); \
public: \
	DECLARE_CLASS(AExoPart, ABodyPart, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AExoPart) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExoPart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExoPart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExoPart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExoPart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExoPart(AExoPart&&); \
	NO_API AExoPart(const AExoPart&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExoPart(AExoPart&&); \
	NO_API AExoPart(const AExoPart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExoPart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExoPart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExoPart)


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_13_PROLOG \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_EVENT_PARMS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoPart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
