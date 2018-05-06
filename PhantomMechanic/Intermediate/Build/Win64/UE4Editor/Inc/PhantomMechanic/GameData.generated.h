// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHANTOMMECHANIC_GameData_generated_h
#error "GameData.generated.h already included, missing '#pragma once' in GameData.h"
#endif
#define PHANTOMMECHANIC_GameData_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_RPC_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameData(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AGameData(); \
public: \
	DECLARE_CLASS(AGameData, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AGameData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameData(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_AGameData(); \
public: \
	DECLARE_CLASS(AGameData, AGameState, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(AGameData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameData(AGameData&&); \
	NO_API AGameData(const AGameData&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameData(AGameData&&); \
	NO_API AGameData(const AGameData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameData)


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_12_PROLOG
#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Framework_GameData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
