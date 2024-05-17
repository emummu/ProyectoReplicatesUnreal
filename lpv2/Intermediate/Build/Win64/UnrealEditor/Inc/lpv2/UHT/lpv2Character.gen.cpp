// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lpv2/lpv2Character.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DamageEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelpv2Character() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LPV2_API UClass* Z_Construct_UClass_Alpv2Character();
	LPV2_API UClass* Z_Construct_UClass_Alpv2Character_NoRegister();
	LPV2_API UClass* Z_Construct_UClass_AThirdPersonMPProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_lpv2();
// End Cross Module References
	DEFINE_FUNCTION(Alpv2Character::execHandleFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageTaken);
		P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageTaken,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execSetCurrentHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_healthValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentHealth(Z_Param_healthValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execOnRep_CurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execJoinGamesession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGamesession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execCreateGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execCallClientTravel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_address);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallClientTravel(Z_Param_address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execCallOpenlevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_address);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOpenlevel(Z_Param_address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Alpv2Character::execOpenLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenLobby();
		P_NATIVE_END;
	}
	static FName NAME_Alpv2Character_HandleFire = FName(TEXT("HandleFire"));
	void Alpv2Character::HandleFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_Alpv2Character_HandleFire),NULL);
	}
	void Alpv2Character::StaticRegisterNativesAlpv2Character()
	{
		UClass* Class = Alpv2Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallClientTravel", &Alpv2Character::execCallClientTravel },
			{ "CallOpenlevel", &Alpv2Character::execCallOpenlevel },
			{ "CreateGameSession", &Alpv2Character::execCreateGameSession },
			{ "GetCurrentHealth", &Alpv2Character::execGetCurrentHealth },
			{ "GetMaxHealth", &Alpv2Character::execGetMaxHealth },
			{ "HandleFire", &Alpv2Character::execHandleFire },
			{ "JoinGamesession", &Alpv2Character::execJoinGamesession },
			{ "OnRep_CurrentHealth", &Alpv2Character::execOnRep_CurrentHealth },
			{ "OpenLobby", &Alpv2Character::execOpenLobby },
			{ "SetCurrentHealth", &Alpv2Character::execSetCurrentHealth },
			{ "StartFire", &Alpv2Character::execStartFire },
			{ "StopFire", &Alpv2Character::execStopFire },
			{ "TakeDamage", &Alpv2Character::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics
	{
		struct lpv2Character_eventCallClientTravel_Parms
		{
			FString address;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::NewProp_address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::NewProp_address = { "address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventCallClientTravel_Parms, address), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::NewProp_address_MetaData), Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::NewProp_address_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::NewProp_address,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "CallClientTravel", nullptr, nullptr, Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::PropPointers), sizeof(Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::lpv2Character_eventCallClientTravel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::lpv2Character_eventCallClientTravel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Alpv2Character_CallClientTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_CallClientTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics
	{
		struct lpv2Character_eventCallOpenlevel_Parms
		{
			FString address;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::NewProp_address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::NewProp_address = { "address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventCallOpenlevel_Parms, address), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::NewProp_address_MetaData), Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::NewProp_address_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::NewProp_address,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "CallOpenlevel", nullptr, nullptr, Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::lpv2Character_eventCallOpenlevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::lpv2Character_eventCallOpenlevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Alpv2Character_CallOpenlevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_CallOpenlevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_CreateGameSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_CreateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_CreateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "CreateGameSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_CreateGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_CreateGameSession_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Alpv2Character_CreateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_CreateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics
	{
		struct lpv2Character_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for Current Health.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for Current Health." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::lpv2Character_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::lpv2Character_eventGetCurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Alpv2Character_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics
	{
		struct lpv2Character_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for Max Health.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for Max Health." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::lpv2Character_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::lpv2Character_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Alpv2Character_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_HandleFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_HandleFire_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server function for spawning projectiles.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server function for spawning projectiles." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_HandleFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "HandleFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_HandleFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_HandleFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Alpv2Character_HandleFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_HandleFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_JoinGamesession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_JoinGamesession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_JoinGamesession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "JoinGamesession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_JoinGamesession_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_JoinGamesession_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Alpv2Character_JoinGamesession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_JoinGamesession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RepNotify for changes made to current health.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RepNotify for changes made to current health." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_OpenLobby_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_OpenLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_OpenLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "OpenLobby", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_OpenLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_OpenLobby_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Alpv2Character_OpenLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_OpenLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics
	{
		struct lpv2Character_eventSetCurrentHealth_Parms
		{
			float healthValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_healthValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::NewProp_healthValue = { "healthValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventSetCurrentHealth_Parms, healthValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::NewProp_healthValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter for Current Health. Clamps the value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter for Current Health. Clamps the value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "SetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::lpv2Character_eventSetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::lpv2Character_eventSetCurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Alpv2Character_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_StartFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_StartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function for beginning weapon fire.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function for beginning weapon fire." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "StartFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_StartFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_StartFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Alpv2Character_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_StopFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_StopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function for ending weapon fire. Once this is called, the player can use StartFire again.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function for ending weapon fire. Once this is called, the player can use StartFire again." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "StopFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_StopFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_StopFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_Alpv2Character_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics
	{
		struct lpv2Character_eventTakeDamage_Parms
		{
			float DamageTaken;
			FDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTaken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventTakeDamage_Parms, DamageTaken), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageEvent_MetaData), Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageEvent_MetaData) }; // 4174483363
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(lpv2Character_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageTaken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_EventInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_DamageCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event for taking damage. Overridden from APawn.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for taking damage. Overridden from APawn." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Alpv2Character, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::lpv2Character_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::lpv2Character_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_Alpv2Character_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Alpv2Character_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Alpv2Character);
	UClass* Z_Construct_UClass_Alpv2Character_NoRegister()
	{
		return Alpv2Character::StaticClass();
	}
	struct Z_Construct_UClass_Alpv2Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Alpv2Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_lpv2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_Alpv2Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Alpv2Character_CallClientTravel, "CallClientTravel" }, // 3832499375
		{ &Z_Construct_UFunction_Alpv2Character_CallOpenlevel, "CallOpenlevel" }, // 220395181
		{ &Z_Construct_UFunction_Alpv2Character_CreateGameSession, "CreateGameSession" }, // 2553987331
		{ &Z_Construct_UFunction_Alpv2Character_GetCurrentHealth, "GetCurrentHealth" }, // 2443831542
		{ &Z_Construct_UFunction_Alpv2Character_GetMaxHealth, "GetMaxHealth" }, // 1093209839
		{ &Z_Construct_UFunction_Alpv2Character_HandleFire, "HandleFire" }, // 333390852
		{ &Z_Construct_UFunction_Alpv2Character_JoinGamesession, "JoinGamesession" }, // 4000689946
		{ &Z_Construct_UFunction_Alpv2Character_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 1737523749
		{ &Z_Construct_UFunction_Alpv2Character_OpenLobby, "OpenLobby" }, // 697837168
		{ &Z_Construct_UFunction_Alpv2Character_SetCurrentHealth, "SetCurrentHealth" }, // 3467715894
		{ &Z_Construct_UFunction_Alpv2Character_StartFire, "StartFire" }, // 2340255986
		{ &Z_Construct_UFunction_Alpv2Character_StopFire, "StopFire" }, // 2011190524
		{ &Z_Construct_UFunction_Alpv2Character_TakeDamage, "TakeDamage" }, // 2920475400
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "lpv2Character.h" },
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_CurrentHealth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The player's current health. When reduced to 0, they are considered dead.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player's current health. When reduced to 0, they are considered dead." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Gameplay|Projectile" },
		{ "ModuleRelativePath", "lpv2Character.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AThirdPersonMPProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Alpv2Character_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay between shots in seconds. Used to control fire rate for your test projectile, but also to prevent an overflow of server functions from binding SpawnProjectile directly to input.*/" },
#endif
		{ "ModuleRelativePath", "lpv2Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay between shots in seconds. Used to control fire rate for your test projectile, but also to prevent an overflow of server functions from binding SpawnProjectile directly to input." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Alpv2Character_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Alpv2Character, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_Alpv2Character_Statics::NewProp_FireRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Alpv2Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Alpv2Character_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Alpv2Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alpv2Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Alpv2Character_Statics::ClassParams = {
		&Alpv2Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Alpv2Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::Class_MetaDataParams), Z_Construct_UClass_Alpv2Character_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Alpv2Character_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Alpv2Character()
	{
		if (!Z_Registration_Info_UClass_Alpv2Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Alpv2Character.OuterSingleton, Z_Construct_UClass_Alpv2Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Alpv2Character.OuterSingleton;
	}
	template<> LPV2_API UClass* StaticClass<Alpv2Character>()
	{
		return Alpv2Character::StaticClass();
	}

	void Alpv2Character::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));

		const bool bIsValid = true
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in Alpv2Character"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Alpv2Character);
	Alpv2Character::~Alpv2Character() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Alpv2Character, Alpv2Character::StaticClass, TEXT("Alpv2Character"), &Z_Registration_Info_UClass_Alpv2Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Alpv2Character), 540098382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_2140841056(TEXT("/Script/lpv2"),
		Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_RAT_Documents_Unreal_Projects_lpv2_Source_lpv2_lpv2Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
