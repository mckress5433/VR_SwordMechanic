// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHANTOMMECHANIC_ExoBody_generated_h
#error "ExoBody.generated.h already included, missing '#pragma once' in ExoBody.h"
#endif
#define PHANTOMMECHANIC_ExoBody_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_RPC_WRAPPERS \
	virtual void Coupling_Implementation(); \
 \
	DECLARE_FUNCTION(execCoupling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Coupling_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Coupling_Implementation(); \
 \
	DECLARE_FUNCTION(execCoupling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Coupling_Implementation(); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_EVENT_PARMS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_CALLBACK_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExoBody(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AExoBody(); \
public: \
	DECLARE_CLASS(AExoBody, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AExoBody) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAExoBody(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AExoBody(); \
public: \
	DECLARE_CLASS(AExoBody, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AExoBody) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExoBody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExoBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExoBody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExoBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExoBody(AExoBody&&); \
	NO_API AExoBody(const AExoBody&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExoBody(AExoBody&&); \
	NO_API AExoBody(const AExoBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExoBody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExoBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExoBody)


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_12_PROLOG \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_EVENT_PARMS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Pawn_ExoBody_ExoBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
