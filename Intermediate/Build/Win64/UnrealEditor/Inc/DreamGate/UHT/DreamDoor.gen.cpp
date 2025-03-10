// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGate/DreamDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamDoor() {}

// Begin Cross Module References
DREAMGATE_API UClass* Z_Construct_UClass_ADreamDoor();
DREAMGATE_API UClass* Z_Construct_UClass_ADreamDoor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DreamGate();
// End Cross Module References

// Begin Class ADreamDoor
void ADreamDoor::StaticRegisterNativesADreamDoor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADreamDoor);
UClass* Z_Construct_UClass_ADreamDoor_NoRegister()
{
	return ADreamDoor::StaticClass();
}
struct Z_Construct_UClass_ADreamDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DreamDoor.h" },
		{ "ModuleRelativePath", "DreamDoor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADreamDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADreamDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADreamDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADreamDoor_Statics::ClassParams = {
	&ADreamDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADreamDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADreamDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADreamDoor()
{
	if (!Z_Registration_Info_UClass_ADreamDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADreamDoor.OuterSingleton, Z_Construct_UClass_ADreamDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADreamDoor.OuterSingleton;
}
template<> DREAMGATE_API UClass* StaticClass<ADreamDoor>()
{
	return ADreamDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADreamDoor);
ADreamDoor::~ADreamDoor() {}
// End Class ADreamDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_DreamGate_Source_DreamGate_DreamDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADreamDoor, ADreamDoor::StaticClass, TEXT("ADreamDoor"), &Z_Registration_Info_UClass_ADreamDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADreamDoor), 2594261130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DreamGate_Source_DreamGate_DreamDoor_h_805459640(TEXT("/Script/DreamGate"),
	Z_CompiledInDeferFile_FID_DreamGate_Source_DreamGate_DreamDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DreamGate_Source_DreamGate_DreamDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
