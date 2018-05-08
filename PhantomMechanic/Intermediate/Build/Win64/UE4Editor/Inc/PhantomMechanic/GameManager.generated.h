// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameModeEnum : uint8;
#ifdef PHANTOMMECHANIC_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define PHANTOMMECHANIC_GameManager_generated_h

#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_RPC_WRAPPERS \
	virtual void setGameMode_Implementation(EGameModeEnum selectedGameMode); \
 \
	DECLARE_FUNCTION(execsetGameMode) \
	{ \
		P_GET_ENUM(EGameModeEnum,Z_Param_selectedGameMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setGameMode_Implementation(EGameModeEnum(Z_Param_selectedGameMode)); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void setGameMode_Implementation(EGameModeEnum selectedGameMode); \
 \
	DECLARE_FUNCTION(execsetGameMode) \
	{ \
		P_GET_ENUM(EGameModeEnum,Z_Param_selectedGameMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setGameMode_Implementation(EGameModeEnum(Z_Param_selectedGameMode)); \
		P_NATIVE_END; \
	}


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_EVENT_PARMS \
	struct GameManager_eventsetGameMode_Parms \
	{ \
		EGameModeEnum selectedGameMode; \
	};


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_CALLBACK_WRAPPERS
#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_UGameManager(); \
public: \
	DECLARE_CLASS(UGameManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(UGameManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend PHANTOMMECHANIC_API class UClass* Z_Construct_UClass_UGameManager(); \
public: \
	DECLARE_CLASS(UGameManager, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/PhantomMechanic"), NO_API) \
	DECLARE_SERIALIZER(UGameManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public:


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManager)


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_PRIVATE_PROPERTY_OFFSET
#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_20_PROLOG \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_EVENT_PARMS


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_RPC_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_INCLASS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_PRIVATE_PROPERTY_OFFSET \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_CALLBACK_WRAPPERS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_INCLASS_NO_PURE_DECLS \
	PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PhantomMechanic_Source_PhantomMechanic_Framework_GameManager_h


#define FOREACH_ENUM_EGAMEMODEENUM(op) \
	op(EGameModeEnum::GM_Base) \
	op(EGameModeEnum::GM_Debug) \
	op(EGameModeEnum::GM_Demo) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
