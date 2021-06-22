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
#ifdef SAKURASPACEMAN_Teleporter_CPP_generated_h
#error "Teleporter_CPP.generated.h already included, missing '#pragma once' in Teleporter_CPP.h"
#endif
#define SAKURASPACEMAN_Teleporter_CPP_generated_h

#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_SPARSE_DATA
#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateTeleporter); \
	DECLARE_FUNCTION(execOnOverlapBeginTeleporterTwo); \
	DECLARE_FUNCTION(execOnOverlapBeginTeleporterOne);


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateTeleporter); \
	DECLARE_FUNCTION(execOnOverlapBeginTeleporterTwo); \
	DECLARE_FUNCTION(execOnOverlapBeginTeleporterOne);


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleporter_CPP(); \
	friend struct Z_Construct_UClass_ATeleporter_CPP_Statics; \
public: \
	DECLARE_CLASS(ATeleporter_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ATeleporter_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATeleporter_CPP(); \
	friend struct Z_Construct_UClass_ATeleporter_CPP_Statics; \
public: \
	DECLARE_CLASS(ATeleporter_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ATeleporter_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeleporter_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleporter_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporter_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporter_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporter_CPP(ATeleporter_CPP&&); \
	NO_API ATeleporter_CPP(const ATeleporter_CPP&); \
public:


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporter_CPP(ATeleporter_CPP&&); \
	NO_API ATeleporter_CPP(const ATeleporter_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporter_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporter_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleporter_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeleporterMesh_One() { return STRUCT_OFFSET(ATeleporter_CPP, TeleporterMesh_One); } \
	FORCEINLINE static uint32 __PPO__TeleporterMesh_Two() { return STRUCT_OFFSET(ATeleporter_CPP, TeleporterMesh_Two); } \
	FORCEINLINE static uint32 __PPO__TeleporterCollisionBox_One() { return STRUCT_OFFSET(ATeleporter_CPP, TeleporterCollisionBox_One); } \
	FORCEINLINE static uint32 __PPO__TeleporterCollisionBox_Two() { return STRUCT_OFFSET(ATeleporter_CPP, TeleporterCollisionBox_Two); } \
	FORCEINLINE static uint32 __PPO__fDelayTime() { return STRUCT_OFFSET(ATeleporter_CPP, fDelayTime); }


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_9_PROLOG
#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_SPARSE_DATA \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_RPC_WRAPPERS \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_INCLASS \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_SPARSE_DATA \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_INCLASS_NO_PURE_DECLS \
	SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class ATeleporter_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SSM_VS_Source_SakuraSpaceMan_Public_Teleporter_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
