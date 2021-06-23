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
#ifdef SAKURASPACEMAN_DeathBox_CPP_generated_h
#error "DeathBox_CPP.generated.h already included, missing '#pragma once' in DeathBox_CPP.h"
#endif
#define SAKURASPACEMAN_DeathBox_CPP_generated_h

#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_SPARSE_DATA
#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathBox_CPP(); \
	friend struct Z_Construct_UClass_ADeathBox_CPP_Statics; \
public: \
	DECLARE_CLASS(ADeathBox_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ADeathBox_CPP)


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADeathBox_CPP(); \
	friend struct Z_Construct_UClass_ADeathBox_CPP_Statics; \
public: \
	DECLARE_CLASS(ADeathBox_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(ADeathBox_CPP)


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathBox_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathBox_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathBox_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathBox_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathBox_CPP(ADeathBox_CPP&&); \
	NO_API ADeathBox_CPP(const ADeathBox_CPP&); \
public:


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathBox_CPP(ADeathBox_CPP&&); \
	NO_API ADeathBox_CPP(const ADeathBox_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathBox_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathBox_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathBox_CPP)


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(ADeathBox_CPP, CollisionBox); }


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_10_PROLOG
#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_SPARSE_DATA \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_RPC_WRAPPERS \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_INCLASS \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_PRIVATE_PROPERTY_OFFSET \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_SPARSE_DATA \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_INCLASS_NO_PURE_DECLS \
	Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class ADeathBox_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Source_SakuraSpaceMan_Public_DeathBox_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
