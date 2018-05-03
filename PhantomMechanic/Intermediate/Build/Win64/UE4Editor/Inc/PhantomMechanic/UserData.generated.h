// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHANTOMMECHANIC_UserData_generated_h
#error "UserData.generated.h already included, missing '#pragma once' in UserData.h"
#endif
#define PHANTOMMECHANIC_UserData_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_RPC_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUserData(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AUserData(); \
public: \
	DECLARE_CLASS(AUserData, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AUserData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUserData(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AUserData(); \
public: \
	DECLARE_CLASS(AUserData, APlayerState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AUserData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUserData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUserData(AUserData&&); \
	NO_API AUserData(const AUserData&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUserData(AUserData&&); \
	NO_API AUserData(const AUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUserData)


#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_12_PROLOG
#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Framework_UserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
