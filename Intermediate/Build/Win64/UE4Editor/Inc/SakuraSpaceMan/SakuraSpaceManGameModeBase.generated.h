// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAKURASPACEMAN_SakuraSpaceManGameModeBase_generated_h
#error "SakuraSpaceManGameModeBase.generated.h already included, missing '#pragma once' in SakuraSpaceManGameModeBase.h"
#endif
#define SAKURASPACEMAN_SakuraSpaceManGameModeBase_generated_h

#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_SPARSE_DATA
#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayersScore);


#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayersScore);


#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASakuraSpaceManGameModeBase(); \
	friend struct Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASakuraSpaceManGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ASakuraSpaceManGameModeBase)


#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASakuraSpaceManGameModeBase(); \
	friend struct Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASakuraSpaceManGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ASakuraSpaceManGameModeBase)


#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASakuraSpaceManGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASakuraSpaceManGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASakuraSpaceManGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASakuraSpaceManGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASakuraSpaceManGameModeBase(ASakuraSpaceManGameModeBase&&); \
	NO_API ASakuraSpaceManGameModeBase(const ASakuraSpaceManGameModeBase&); \
public:


#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASakuraSpaceManGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASakuraSpaceManGameModeBase(ASakuraSpaceManGameModeBase&&); \
	NO_API ASakuraSpaceManGameModeBase(const ASakuraSpaceManGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASakuraSpaceManGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASakuraSpaceManGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASakuraSpaceManGameModeBase)


#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_13_PROLOG
#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_SPARSE_DATA \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_RPC_WRAPPERS \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_INCLASS \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_SPARSE_DATA \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class ASakuraSpaceManGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SSMVS_2_Source_SakuraSpaceMan_Public_SakuraSpaceManGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
