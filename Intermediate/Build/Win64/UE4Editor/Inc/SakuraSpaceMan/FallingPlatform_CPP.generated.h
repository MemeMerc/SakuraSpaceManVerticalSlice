// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SAKURASPACEMAN_FallingPlatform_CPP_generated_h
#error "FallingPlatform_CPP.generated.h already included, missing '#pragma once' in FallingPlatform_CPP.h"
#endif
#define SAKURASPACEMAN_FallingPlatform_CPP_generated_h

#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_SPARSE_DATA
#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFallingPlatform_CPP(); \
	friend struct Z_Construct_UClass_AFallingPlatform_CPP_Statics; \
public: \
	DECLARE_CLASS(AFallingPlatform_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(AFallingPlatform_CPP)


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFallingPlatform_CPP(); \
	friend struct Z_Construct_UClass_AFallingPlatform_CPP_Statics; \
public: \
	DECLARE_CLASS(AFallingPlatform_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(AFallingPlatform_CPP)


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFallingPlatform_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFallingPlatform_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFallingPlatform_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFallingPlatform_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFallingPlatform_CPP(AFallingPlatform_CPP&&); \
	NO_API AFallingPlatform_CPP(const AFallingPlatform_CPP&); \
public:


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFallingPlatform_CPP(AFallingPlatform_CPP&&); \
	NO_API AFallingPlatform_CPP(const AFallingPlatform_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFallingPlatform_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFallingPlatform_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFallingPlatform_CPP)


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AFallingPlatform_CPP, Mesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(AFallingPlatform_CPP, CollisionBox); }


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_9_PROLOG
#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_SPARSE_DATA \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_RPC_WRAPPERS \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_INCLASS \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_SPARSE_DATA \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_INCLASS_NO_PURE_DECLS \
	SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class AFallingPlatform_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SSMVS_Source_SakuraSpaceMan_Public_FallingPlatform_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS