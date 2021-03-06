// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAKURASPACEMAN_GrappleLocation_CPP_generated_h
#error "GrappleLocation_CPP.generated.h already included, missing '#pragma once' in GrappleLocation_CPP.h"
#endif
#define SAKURASPACEMAN_GrappleLocation_CPP_generated_h

#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_SPARSE_DATA
#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_RPC_WRAPPERS
#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_EVENT_PARMS \
	struct GrappleLocation_CPP_eventSetWidgetVisibility_Parms \
	{ \
		bool _bIsVisible; \
	};


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_CALLBACK_WRAPPERS
#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrappleLocation_CPP(); \
	friend struct Z_Construct_UClass_AGrappleLocation_CPP_Statics; \
public: \
	DECLARE_CLASS(AGrappleLocation_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(AGrappleLocation_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGrappleLocation_CPP(); \
	friend struct Z_Construct_UClass_AGrappleLocation_CPP_Statics; \
public: \
	DECLARE_CLASS(AGrappleLocation_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(AGrappleLocation_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrappleLocation_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrappleLocation_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappleLocation_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappleLocation_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrappleLocation_CPP(AGrappleLocation_CPP&&); \
	NO_API AGrappleLocation_CPP(const AGrappleLocation_CPP&); \
public:


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrappleLocation_CPP(AGrappleLocation_CPP&&); \
	NO_API AGrappleLocation_CPP(const AGrappleLocation_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappleLocation_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappleLocation_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrappleLocation_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereGrappleLocation() { return STRUCT_OFFSET(AGrappleLocation_CPP, SphereGrappleLocation); } \
	FORCEINLINE static uint32 __PPO__vScreenLocation() { return STRUCT_OFFSET(AGrappleLocation_CPP, vScreenLocation); } \
	FORCEINLINE static uint32 __PPO__fScreenLength() { return STRUCT_OFFSET(AGrappleLocation_CPP, fScreenLength); } \
	FORCEINLINE static uint32 __PPO__bCanLaunchFurther() { return STRUCT_OFFSET(AGrappleLocation_CPP, bCanLaunchFurther); }


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_10_PROLOG \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_EVENT_PARMS


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_PRIVATE_PROPERTY_OFFSET \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_SPARSE_DATA \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_RPC_WRAPPERS \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_CALLBACK_WRAPPERS \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_INCLASS \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_PRIVATE_PROPERTY_OFFSET \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_SPARSE_DATA \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_CALLBACK_WRAPPERS \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_INCLASS_NO_PURE_DECLS \
	SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class AGrappleLocation_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SSM_VS_Source_SakuraSpaceMan_Public_GrappleLocation_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
