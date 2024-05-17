// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "lpv2Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FDamageEvent;
#ifdef LPV2_lpv2Character_generated_h
#error "lpv2Character.generated.h already included, missing '#pragma once' in lpv2Character.h"
#endif
#define LPV2_lpv2Character_generated_h

#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_SPARSE_DATA
#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleFire_Implementation(); \
 \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execJoinGamesession); \
	DECLARE_FUNCTION(execCreateGameSession); \
	DECLARE_FUNCTION(execCallClientTravel); \
	DECLARE_FUNCTION(execCallOpenlevel); \
	DECLARE_FUNCTION(execOpenLobby);


#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_ACCESSORS
#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_CALLBACK_WRAPPERS
#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAlpv2Character(); \
	friend struct Z_Construct_UClass_Alpv2Character_Statics; \
public: \
	DECLARE_CLASS(Alpv2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lpv2"), NO_API) \
	DECLARE_SERIALIZER(Alpv2Character) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Alpv2Character(Alpv2Character&&); \
	NO_API Alpv2Character(const Alpv2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Alpv2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Alpv2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Alpv2Character) \
	NO_API virtual ~Alpv2Character();


#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_20_PROLOG
#define FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_SPARSE_DATA \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_ACCESSORS \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_CALLBACK_WRAPPERS \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LPV2_API UClass* StaticClass<class Alpv2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
