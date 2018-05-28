// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHANTOMMECHANIC_PhantomPart_generated_h
#error "PhantomPart.generated.h already included, missing '#pragma once' in PhantomPart.h"
#endif
#define PHANTOMMECHANIC_PhantomPart_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_RPC_WRAPPERS \
	virtual void PhantomMaterialUpdater_Implementation(); \
 \
	DECLARE_FUNCTION(execPhantomMaterialUpdater) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PhantomMaterialUpdater_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PhantomMaterialUpdater_Implementation(); \
 \
	DECLARE_FUNCTION(execPhantomMaterialUpdater) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PhantomMaterialUpdater_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_EVENT_PARMS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_CALLBACK_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhantomPart(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_APhantomPart(); \
public: \
	DECLARE_CLASS(APhantomPart, ABodyPart, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(APhantomPart) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPhantomPart(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_APhantomPart(); \
public: \
	DECLARE_CLASS(APhantomPart, ABodyPart, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(APhantomPart) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhantomPart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhantomPart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomPart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomPart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomPart(APhantomPart&&); \
	NO_API APhantomPart(const APhantomPart&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhantomPart() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantomPart(APhantomPart&&); \
	NO_API APhantomPart(const APhantomPart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantomPart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantomPart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhantomPart)


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_12_PROLOG \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_EVENT_PARMS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Pawn_Phantom_PhantomPart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
