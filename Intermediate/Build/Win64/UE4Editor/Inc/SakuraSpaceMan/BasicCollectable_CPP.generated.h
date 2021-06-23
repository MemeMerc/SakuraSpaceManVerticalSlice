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
#ifdef SAKURASPACEMAN_BasicCollectable_CPP_generated_h
#error "BasicCollectable_CPP.generated.h already included, missing '#pragma once' in BasicCollectable_CPP.h"
#endif
#define SAKURASPACEMAN_BasicCollectable_CPP_generated_h

#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_SPARSE_DATA
#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMeshOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMeshOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicCollectable_CPP(); \
	friend struct Z_Construct_UClass_ABasicCollectable_CPP_Statics; \
public: \
	DECLARE_CLASS(ABasicCollectable_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ABasicCollectable_CPP)


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABasicCollectable_CPP(); \
	friend struct Z_Construct_UClass_ABasicCollectable_CPP_Statics; \
public: \
	DECLARE_CLASS(ABasicCollectable_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ABasicCollectable_CPP)


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicCollectable_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicCollectable_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicCollectable_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicCollectable_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicCollectable_CPP(ABasicCollectable_CPP&&); \
	NO_API ABasicCollectable_CPP(const ABasicCollectable_CPP&); \
public:


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicCollectable_CPP(ABasicCollectable_CPP&&); \
	NO_API ABasicCollectable_CPP(const ABasicCollectable_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicCollectable_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicCollectable_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicCollectable_CPP)


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABasicCollectable_CPP, Mesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ABasicCollectable_CPP, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__Target() { return STRUCT_OFFSET(ABasicCollectable_CPP, Target); }


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_9_PROLOG
#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_SPARSE_DATA \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_RPC_WRAPPERS \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_INCLASS \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_SPARSE_DATA \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_INCLASS_NO_PURE_DECLS \
	SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class ABasicCollectable_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SSMVS_3_Source_SakuraSpaceMan_Public_BasicCollectable_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
