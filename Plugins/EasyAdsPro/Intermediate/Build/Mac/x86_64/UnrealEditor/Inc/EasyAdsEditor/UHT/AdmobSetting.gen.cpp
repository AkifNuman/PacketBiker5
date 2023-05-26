// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAdsEditor/Private/AdmobSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdmobSetting() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EASYADSEDITOR_API UClass* Z_Construct_UClass_UAdmobSetting();
	EASYADSEDITOR_API UClass* Z_Construct_UClass_UAdmobSetting_NoRegister();
	EASYADSEDITOR_API UEnum* Z_Construct_UEnum_EasyAdsEditor_Language();
	EASYADSEDITOR_API UEnum* Z_Construct_UEnum_EasyAdsEditor_SimulateLocation();
	EASYADSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingDescription();
	UPackage* Z_Construct_UPackage__Script_EasyAdsEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SimulateLocation;
	static UEnum* SimulateLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SimulateLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SimulateLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyAdsEditor_SimulateLocation, Z_Construct_UPackage__Script_EasyAdsEditor(), TEXT("SimulateLocation"));
		}
		return Z_Registration_Info_UEnum_SimulateLocation.OuterSingleton;
	}
	template<> EASYADSEDITOR_API UEnum* StaticEnum<SimulateLocation>()
	{
		return SimulateLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::Enumerators[] = {
		{ "SimulateLocation::NONE", (int64)SimulateLocation::NONE },
		{ "SimulateLocation::IN_EEA", (int64)SimulateLocation::IN_EEA },
		{ "SimulateLocation::NOT_IN_EEA", (int64)SimulateLocation::NOT_IN_EEA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IN_EEA.DisplayName", "IN_EEA" },
		{ "IN_EEA.Name", "SimulateLocation::IN_EEA" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
		{ "NONE.DisplayName", "NONE" },
		{ "NONE.Name", "SimulateLocation::NONE" },
		{ "NOT_IN_EEA.DisplayName", "NOT_IN_EEA" },
		{ "NOT_IN_EEA.Name", "SimulateLocation::NOT_IN_EEA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyAdsEditor,
		nullptr,
		"SimulateLocation",
		"SimulateLocation",
		Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyAdsEditor_SimulateLocation()
	{
		if (!Z_Registration_Info_UEnum_SimulateLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SimulateLocation.InnerSingleton, Z_Construct_UEnum_EasyAdsEditor_SimulateLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SimulateLocation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Language;
	static UEnum* Language_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Language.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Language.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyAdsEditor_Language, Z_Construct_UPackage__Script_EasyAdsEditor(), TEXT("Language"));
		}
		return Z_Registration_Info_UEnum_Language.OuterSingleton;
	}
	template<> EASYADSEDITOR_API UEnum* StaticEnum<Language>()
	{
		return Language_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyAdsEditor_Language_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyAdsEditor_Language_Statics::Enumerators[] = {
		{ "Language::aa", (int64)Language::aa },
		{ "Language::ab", (int64)Language::ab },
		{ "Language::ae", (int64)Language::ae },
		{ "Language::af", (int64)Language::af },
		{ "Language::ak", (int64)Language::ak },
		{ "Language::am", (int64)Language::am },
		{ "Language::an", (int64)Language::an },
		{ "Language::ar", (int64)Language::ar },
		{ "Language::as", (int64)Language::as },
		{ "Language::av", (int64)Language::av },
		{ "Language::ay", (int64)Language::ay },
		{ "Language::az", (int64)Language::az },
		{ "Language::ba", (int64)Language::ba },
		{ "Language::be", (int64)Language::be },
		{ "Language::bg", (int64)Language::bg },
		{ "Language::bh", (int64)Language::bh },
		{ "Language::bi", (int64)Language::bi },
		{ "Language::bm", (int64)Language::bm },
		{ "Language::bn", (int64)Language::bn },
		{ "Language::bo", (int64)Language::bo },
		{ "Language::br", (int64)Language::br },
		{ "Language::bs", (int64)Language::bs },
		{ "Language::ca", (int64)Language::ca },
		{ "Language::ce", (int64)Language::ce },
		{ "Language::ch", (int64)Language::ch },
		{ "Language::co", (int64)Language::co },
		{ "Language::cr", (int64)Language::cr },
		{ "Language::cs", (int64)Language::cs },
		{ "Language::cu", (int64)Language::cu },
		{ "Language::cv", (int64)Language::cv },
		{ "Language::cy", (int64)Language::cy },
		{ "Language::da", (int64)Language::da },
		{ "Language::de", (int64)Language::de },
		{ "Language::dv", (int64)Language::dv },
		{ "Language::dz", (int64)Language::dz },
		{ "Language::ee", (int64)Language::ee },
		{ "Language::el", (int64)Language::el },
		{ "Language::en", (int64)Language::en },
		{ "Language::eo", (int64)Language::eo },
		{ "Language::es", (int64)Language::es },
		{ "Language::et", (int64)Language::et },
		{ "Language::eu", (int64)Language::eu },
		{ "Language::fa", (int64)Language::fa },
		{ "Language::ff", (int64)Language::ff },
		{ "Language::fi", (int64)Language::fi },
		{ "Language::fj", (int64)Language::fj },
		{ "Language::fo", (int64)Language::fo },
		{ "Language::fr", (int64)Language::fr },
		{ "Language::fy", (int64)Language::fy },
		{ "Language::ga", (int64)Language::ga },
		{ "Language::gd", (int64)Language::gd },
		{ "Language::gl", (int64)Language::gl },
		{ "Language::gn", (int64)Language::gn },
		{ "Language::gu", (int64)Language::gu },
		{ "Language::gv", (int64)Language::gv },
		{ "Language::ha", (int64)Language::ha },
		{ "Language::he", (int64)Language::he },
		{ "Language::hi", (int64)Language::hi },
		{ "Language::ho", (int64)Language::ho },
		{ "Language::hr", (int64)Language::hr },
		{ "Language::ht", (int64)Language::ht },
		{ "Language::hu", (int64)Language::hu },
		{ "Language::hy", (int64)Language::hy },
		{ "Language::hz", (int64)Language::hz },
		{ "Language::ia", (int64)Language::ia },
		{ "Language::id", (int64)Language::id },
		{ "Language::ie", (int64)Language::ie },
		{ "Language::ig", (int64)Language::ig },
		{ "Language::ii", (int64)Language::ii },
		{ "Language::ik", (int64)Language::ik },
		{ "Language::io", (int64)Language::io },
		{ "Language::is", (int64)Language::is },
		{ "Language::it", (int64)Language::it },
		{ "Language::iu", (int64)Language::iu },
		{ "Language::ja", (int64)Language::ja },
		{ "Language::jv", (int64)Language::jv },
		{ "Language::ka", (int64)Language::ka },
		{ "Language::kg", (int64)Language::kg },
		{ "Language::ki", (int64)Language::ki },
		{ "Language::kj", (int64)Language::kj },
		{ "Language::kk", (int64)Language::kk },
		{ "Language::kl", (int64)Language::kl },
		{ "Language::km", (int64)Language::km },
		{ "Language::kn", (int64)Language::kn },
		{ "Language::ko", (int64)Language::ko },
		{ "Language::kr", (int64)Language::kr },
		{ "Language::ks", (int64)Language::ks },
		{ "Language::ku", (int64)Language::ku },
		{ "Language::kv", (int64)Language::kv },
		{ "Language::kw", (int64)Language::kw },
		{ "Language::ky", (int64)Language::ky },
		{ "Language::la", (int64)Language::la },
		{ "Language::lb", (int64)Language::lb },
		{ "Language::lg", (int64)Language::lg },
		{ "Language::li", (int64)Language::li },
		{ "Language::ln", (int64)Language::ln },
		{ "Language::lo", (int64)Language::lo },
		{ "Language::lt", (int64)Language::lt },
		{ "Language::lu", (int64)Language::lu },
		{ "Language::lv", (int64)Language::lv },
		{ "Language::mg", (int64)Language::mg },
		{ "Language::mh", (int64)Language::mh },
		{ "Language::mi", (int64)Language::mi },
		{ "Language::mk", (int64)Language::mk },
		{ "Language::ml", (int64)Language::ml },
		{ "Language::mn", (int64)Language::mn },
		{ "Language::mr", (int64)Language::mr },
		{ "Language::ms", (int64)Language::ms },
		{ "Language::mt", (int64)Language::mt },
		{ "Language::my", (int64)Language::my },
		{ "Language::na", (int64)Language::na },
		{ "Language::nb", (int64)Language::nb },
		{ "Language::nd", (int64)Language::nd },
		{ "Language::ne", (int64)Language::ne },
		{ "Language::ng", (int64)Language::ng },
		{ "Language::nl", (int64)Language::nl },
		{ "Language::nn", (int64)Language::nn },
		{ "Language::no", (int64)Language::no },
		{ "Language::nr", (int64)Language::nr },
		{ "Language::nv", (int64)Language::nv },
		{ "Language::ny", (int64)Language::ny },
		{ "Language::oc", (int64)Language::oc },
		{ "Language::oj", (int64)Language::oj },
		{ "Language::om", (int64)Language::om },
		{ "Language::os", (int64)Language::os },
		{ "Language::pa", (int64)Language::pa },
		{ "Language::pi", (int64)Language::pi },
		{ "Language::pl", (int64)Language::pl },
		{ "Language::ps", (int64)Language::ps },
		{ "Language::pt", (int64)Language::pt },
		{ "Language::qu", (int64)Language::qu },
		{ "Language::rm", (int64)Language::rm },
		{ "Language::rn", (int64)Language::rn },
		{ "Language::ro", (int64)Language::ro },
		{ "Language::ru", (int64)Language::ru },
		{ "Language::rw", (int64)Language::rw },
		{ "Language::sa", (int64)Language::sa },
		{ "Language::sc", (int64)Language::sc },
		{ "Language::sd", (int64)Language::sd },
		{ "Language::se", (int64)Language::se },
		{ "Language::sg", (int64)Language::sg },
		{ "Language::si", (int64)Language::si },
		{ "Language::sk", (int64)Language::sk },
		{ "Language::sl", (int64)Language::sl },
		{ "Language::sm", (int64)Language::sm },
		{ "Language::sn", (int64)Language::sn },
		{ "Language::so", (int64)Language::so },
		{ "Language::sq", (int64)Language::sq },
		{ "Language::sr", (int64)Language::sr },
		{ "Language::ss", (int64)Language::ss },
		{ "Language::st", (int64)Language::st },
		{ "Language::su", (int64)Language::su },
		{ "Language::sv", (int64)Language::sv },
		{ "Language::sw", (int64)Language::sw },
		{ "Language::ta", (int64)Language::ta },
		{ "Language::te", (int64)Language::te },
		{ "Language::tg", (int64)Language::tg },
		{ "Language::th", (int64)Language::th },
		{ "Language::ti", (int64)Language::ti },
		{ "Language::tk", (int64)Language::tk },
		{ "Language::tl", (int64)Language::tl },
		{ "Language::tn", (int64)Language::tn },
		{ "Language::to", (int64)Language::to },
		{ "Language::tr", (int64)Language::tr },
		{ "Language::ts", (int64)Language::ts },
		{ "Language::tt", (int64)Language::tt },
		{ "Language::tw", (int64)Language::tw },
		{ "Language::ty", (int64)Language::ty },
		{ "Language::ug", (int64)Language::ug },
		{ "Language::uk", (int64)Language::uk },
		{ "Language::ur", (int64)Language::ur },
		{ "Language::uz", (int64)Language::uz },
		{ "Language::ve", (int64)Language::ve },
		{ "Language::vi", (int64)Language::vi },
		{ "Language::vo", (int64)Language::vo },
		{ "Language::wa", (int64)Language::wa },
		{ "Language::wo", (int64)Language::wo },
		{ "Language::xh", (int64)Language::xh },
		{ "Language::yi", (int64)Language::yi },
		{ "Language::yo", (int64)Language::yo },
		{ "Language::za", (int64)Language::za },
		{ "Language::zh", (int64)Language::zh },
		{ "Language::zu", (int64)Language::zu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyAdsEditor_Language_Statics::Enum_MetaDataParams[] = {
		{ "aa.DisplayName", "aa" },
		{ "aa.Name", "Language::aa" },
		{ "ab.DisplayName", "ab" },
		{ "ab.Name", "Language::ab" },
		{ "ae.DisplayName", "ae" },
		{ "ae.Name", "Language::ae" },
		{ "af.DisplayName", "af" },
		{ "af.Name", "Language::af" },
		{ "ak.DisplayName", "ak" },
		{ "ak.Name", "Language::ak" },
		{ "am.DisplayName", "am" },
		{ "am.Name", "Language::am" },
		{ "an.DisplayName", "an" },
		{ "an.Name", "Language::an" },
		{ "ar.DisplayName", "ar" },
		{ "ar.Name", "Language::ar" },
		{ "as.DisplayName", "as" },
		{ "as.Name", "Language::as" },
		{ "av.DisplayName", "av" },
		{ "av.Name", "Language::av" },
		{ "ay.DisplayName", "ay" },
		{ "ay.Name", "Language::ay" },
		{ "az.DisplayName", "az" },
		{ "az.Name", "Language::az" },
		{ "ba.DisplayName", "ba" },
		{ "ba.Name", "Language::ba" },
		{ "be.DisplayName", "be" },
		{ "be.Name", "Language::be" },
		{ "bg.DisplayName", "bg" },
		{ "bg.Name", "Language::bg" },
		{ "bh.DisplayName", "bh" },
		{ "bh.Name", "Language::bh" },
		{ "bi.DisplayName", "bi" },
		{ "bi.Name", "Language::bi" },
		{ "BlueprintType", "true" },
		{ "bm.DisplayName", "bm" },
		{ "bm.Name", "Language::bm" },
		{ "bn.DisplayName", "bn" },
		{ "bn.Name", "Language::bn" },
		{ "bo.DisplayName", "bo" },
		{ "bo.Name", "Language::bo" },
		{ "br.DisplayName", "br" },
		{ "br.Name", "Language::br" },
		{ "bs.DisplayName", "bs" },
		{ "bs.Name", "Language::bs" },
		{ "ca.DisplayName", "ca" },
		{ "ca.Name", "Language::ca" },
		{ "ce.DisplayName", "ce" },
		{ "ce.Name", "Language::ce" },
		{ "ch.DisplayName", "ch" },
		{ "ch.Name", "Language::ch" },
		{ "co.DisplayName", "co" },
		{ "co.Name", "Language::co" },
		{ "cr.DisplayName", "cr" },
		{ "cr.Name", "Language::cr" },
		{ "cs.DisplayName", "cs" },
		{ "cs.Name", "Language::cs" },
		{ "cu.DisplayName", "cu" },
		{ "cu.Name", "Language::cu" },
		{ "cv.DisplayName", "cv" },
		{ "cv.Name", "Language::cv" },
		{ "cy.DisplayName", "cy" },
		{ "cy.Name", "Language::cy" },
		{ "da.DisplayName", "da" },
		{ "da.Name", "Language::da" },
		{ "de.DisplayName", "de" },
		{ "de.Name", "Language::de" },
		{ "dv.DisplayName", "dv" },
		{ "dv.Name", "Language::dv" },
		{ "dz.DisplayName", "dz" },
		{ "dz.Name", "Language::dz" },
		{ "ee.DisplayName", "ee" },
		{ "ee.Name", "Language::ee" },
		{ "el.DisplayName", "el" },
		{ "el.Name", "Language::el" },
		{ "en.DisplayName", "en" },
		{ "en.Name", "Language::en" },
		{ "eo.DisplayName", "eo" },
		{ "eo.Name", "Language::eo" },
		{ "es.DisplayName", "es" },
		{ "es.Name", "Language::es" },
		{ "et.DisplayName", "et" },
		{ "et.Name", "Language::et" },
		{ "eu.DisplayName", "eu" },
		{ "eu.Name", "Language::eu" },
		{ "fa.DisplayName", "fa" },
		{ "fa.Name", "Language::fa" },
		{ "ff.DisplayName", "ff" },
		{ "ff.Name", "Language::ff" },
		{ "fi.DisplayName", "fi" },
		{ "fi.Name", "Language::fi" },
		{ "fj.DisplayName", "fj" },
		{ "fj.Name", "Language::fj" },
		{ "fo.DisplayName", "fo" },
		{ "fo.Name", "Language::fo" },
		{ "fr.DisplayName", "fr" },
		{ "fr.Name", "Language::fr" },
		{ "fy.DisplayName", "fy" },
		{ "fy.Name", "Language::fy" },
		{ "ga.DisplayName", "ga" },
		{ "ga.Name", "Language::ga" },
		{ "gd.DisplayName", "gd" },
		{ "gd.Name", "Language::gd" },
		{ "gl.DisplayName", "gl" },
		{ "gl.Name", "Language::gl" },
		{ "gn.DisplayName", "gn" },
		{ "gn.Name", "Language::gn" },
		{ "gu.DisplayName", "gu" },
		{ "gu.Name", "Language::gu" },
		{ "gv.DisplayName", "gv" },
		{ "gv.Name", "Language::gv" },
		{ "ha.DisplayName", "ha" },
		{ "ha.Name", "Language::ha" },
		{ "he.DisplayName", "he" },
		{ "he.Name", "Language::he" },
		{ "hi.DisplayName", "hi" },
		{ "hi.Name", "Language::hi" },
		{ "ho.DisplayName", "ho" },
		{ "ho.Name", "Language::ho" },
		{ "hr.DisplayName", "hr" },
		{ "hr.Name", "Language::hr" },
		{ "ht.DisplayName", "ht" },
		{ "ht.Name", "Language::ht" },
		{ "hu.DisplayName", "hu" },
		{ "hu.Name", "Language::hu" },
		{ "hy.DisplayName", "hy" },
		{ "hy.Name", "Language::hy" },
		{ "hz.DisplayName", "hz" },
		{ "hz.Name", "Language::hz" },
		{ "ia.DisplayName", "ia" },
		{ "ia.Name", "Language::ia" },
		{ "id.DisplayName", "id" },
		{ "id.Name", "Language::id" },
		{ "ie.DisplayName", "ie" },
		{ "ie.Name", "Language::ie" },
		{ "ig.DisplayName", "ig" },
		{ "ig.Name", "Language::ig" },
		{ "ii.DisplayName", "ii" },
		{ "ii.Name", "Language::ii" },
		{ "ik.DisplayName", "ik" },
		{ "ik.Name", "Language::ik" },
		{ "io.DisplayName", "io" },
		{ "io.Name", "Language::io" },
		{ "is.DisplayName", "is" },
		{ "is.Name", "Language::is" },
		{ "it.DisplayName", "it" },
		{ "it.Name", "Language::it" },
		{ "iu.DisplayName", "iu" },
		{ "iu.Name", "Language::iu" },
		{ "ja.DisplayName", "ja" },
		{ "ja.Name", "Language::ja" },
		{ "jv.DisplayName", "jv" },
		{ "jv.Name", "Language::jv" },
		{ "ka.DisplayName", "ka" },
		{ "ka.Name", "Language::ka" },
		{ "kg.DisplayName", "kg" },
		{ "kg.Name", "Language::kg" },
		{ "ki.DisplayName", "ki" },
		{ "ki.Name", "Language::ki" },
		{ "kj.DisplayName", "kj" },
		{ "kj.Name", "Language::kj" },
		{ "kk.DisplayName", "kk" },
		{ "kk.Name", "Language::kk" },
		{ "kl.DisplayName", "kl" },
		{ "kl.Name", "Language::kl" },
		{ "km.DisplayName", "km" },
		{ "km.Name", "Language::km" },
		{ "kn.DisplayName", "kn" },
		{ "kn.Name", "Language::kn" },
		{ "ko.DisplayName", "ko" },
		{ "ko.Name", "Language::ko" },
		{ "kr.DisplayName", "kr" },
		{ "kr.Name", "Language::kr" },
		{ "ks.DisplayName", "ks" },
		{ "ks.Name", "Language::ks" },
		{ "ku.DisplayName", "ku" },
		{ "ku.Name", "Language::ku" },
		{ "kv.DisplayName", "kv" },
		{ "kv.Name", "Language::kv" },
		{ "kw.DisplayName", "kw" },
		{ "kw.Name", "Language::kw" },
		{ "ky.DisplayName", "ky" },
		{ "ky.Name", "Language::ky" },
		{ "la.DisplayName", "la" },
		{ "la.Name", "Language::la" },
		{ "lb.DisplayName", "lb" },
		{ "lb.Name", "Language::lb" },
		{ "lg.DisplayName", "lg" },
		{ "lg.Name", "Language::lg" },
		{ "li.DisplayName", "li" },
		{ "li.Name", "Language::li" },
		{ "ln.DisplayName", "ln" },
		{ "ln.Name", "Language::ln" },
		{ "lo.DisplayName", "lo" },
		{ "lo.Name", "Language::lo" },
		{ "lt.DisplayName", "lt" },
		{ "lt.Name", "Language::lt" },
		{ "lu.DisplayName", "lu" },
		{ "lu.Name", "Language::lu" },
		{ "lv.DisplayName", "lv" },
		{ "lv.Name", "Language::lv" },
		{ "mg.DisplayName", "mg" },
		{ "mg.Name", "Language::mg" },
		{ "mh.DisplayName", "mh" },
		{ "mh.Name", "Language::mh" },
		{ "mi.DisplayName", "mi" },
		{ "mi.Name", "Language::mi" },
		{ "mk.DisplayName", "mk" },
		{ "mk.Name", "Language::mk" },
		{ "ml.DisplayName", "ml" },
		{ "ml.Name", "Language::ml" },
		{ "mn.DisplayName", "mn" },
		{ "mn.Name", "Language::mn" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
		{ "mr.DisplayName", "mr" },
		{ "mr.Name", "Language::mr" },
		{ "ms.DisplayName", "ms" },
		{ "ms.Name", "Language::ms" },
		{ "mt.DisplayName", "mt" },
		{ "mt.Name", "Language::mt" },
		{ "my.DisplayName", "my" },
		{ "my.Name", "Language::my" },
		{ "na.DisplayName", "na" },
		{ "na.Name", "Language::na" },
		{ "nb.DisplayName", "nb" },
		{ "nb.Name", "Language::nb" },
		{ "nd.DisplayName", "nd" },
		{ "nd.Name", "Language::nd" },
		{ "ne.DisplayName", "ne" },
		{ "ne.Name", "Language::ne" },
		{ "ng.DisplayName", "ng" },
		{ "ng.Name", "Language::ng" },
		{ "nl.DisplayName", "nl" },
		{ "nl.Name", "Language::nl" },
		{ "nn.DisplayName", "nn" },
		{ "nn.Name", "Language::nn" },
		{ "no.DisplayName", "no" },
		{ "no.Name", "Language::no" },
		{ "nr.DisplayName", "nr" },
		{ "nr.Name", "Language::nr" },
		{ "nv.DisplayName", "nv" },
		{ "nv.Name", "Language::nv" },
		{ "ny.DisplayName", "ny" },
		{ "ny.Name", "Language::ny" },
		{ "oc.DisplayName", "oc" },
		{ "oc.Name", "Language::oc" },
		{ "oj.DisplayName", "oj" },
		{ "oj.Name", "Language::oj" },
		{ "om.DisplayName", "om" },
		{ "om.Name", "Language::om" },
		{ "os.DisplayName", "os" },
		{ "os.Name", "Language::os" },
		{ "pa.DisplayName", "pa" },
		{ "pa.Name", "Language::pa" },
		{ "pi.DisplayName", "pi" },
		{ "pi.Name", "Language::pi" },
		{ "pl.DisplayName", "pl" },
		{ "pl.Name", "Language::pl" },
		{ "ps.DisplayName", "ps" },
		{ "ps.Name", "Language::ps" },
		{ "pt.DisplayName", "pt" },
		{ "pt.Name", "Language::pt" },
		{ "qu.DisplayName", "qu" },
		{ "qu.Name", "Language::qu" },
		{ "rm.DisplayName", "rm" },
		{ "rm.Name", "Language::rm" },
		{ "rn.DisplayName", "rn" },
		{ "rn.Name", "Language::rn" },
		{ "ro.DisplayName", "ro" },
		{ "ro.Name", "Language::ro" },
		{ "ru.DisplayName", "ru" },
		{ "ru.Name", "Language::ru" },
		{ "rw.DisplayName", "rw" },
		{ "rw.Name", "Language::rw" },
		{ "sa.DisplayName", "sa" },
		{ "sa.Name", "Language::sa" },
		{ "sc.DisplayName", "sc" },
		{ "sc.Name", "Language::sc" },
		{ "sd.DisplayName", "sd" },
		{ "sd.Name", "Language::sd" },
		{ "se.DisplayName", "se" },
		{ "se.Name", "Language::se" },
		{ "sg.DisplayName", "sg" },
		{ "sg.Name", "Language::sg" },
		{ "si.DisplayName", "si" },
		{ "si.Name", "Language::si" },
		{ "sk.DisplayName", "sk" },
		{ "sk.Name", "Language::sk" },
		{ "sl.DisplayName", "sl" },
		{ "sl.Name", "Language::sl" },
		{ "sm.DisplayName", "sm" },
		{ "sm.Name", "Language::sm" },
		{ "sn.DisplayName", "sn" },
		{ "sn.Name", "Language::sn" },
		{ "so.DisplayName", "so" },
		{ "so.Name", "Language::so" },
		{ "sq.DisplayName", "sq" },
		{ "sq.Name", "Language::sq" },
		{ "sr.DisplayName", "sr" },
		{ "sr.Name", "Language::sr" },
		{ "ss.DisplayName", "ss" },
		{ "ss.Name", "Language::ss" },
		{ "st.DisplayName", "st" },
		{ "st.Name", "Language::st" },
		{ "su.DisplayName", "su" },
		{ "su.Name", "Language::su" },
		{ "sv.DisplayName", "sv" },
		{ "sv.Name", "Language::sv" },
		{ "sw.DisplayName", "sw" },
		{ "sw.Name", "Language::sw" },
		{ "ta.DisplayName", "ta" },
		{ "ta.Name", "Language::ta" },
		{ "te.DisplayName", "te" },
		{ "te.Name", "Language::te" },
		{ "tg.DisplayName", "tg" },
		{ "tg.Name", "Language::tg" },
		{ "th.DisplayName", "th" },
		{ "th.Name", "Language::th" },
		{ "ti.DisplayName", "ti" },
		{ "ti.Name", "Language::ti" },
		{ "tk.DisplayName", "tk" },
		{ "tk.Name", "Language::tk" },
		{ "tl.DisplayName", "tl" },
		{ "tl.Name", "Language::tl" },
		{ "tn.DisplayName", "tn" },
		{ "tn.Name", "Language::tn" },
		{ "to.DisplayName", "to" },
		{ "to.Name", "Language::to" },
		{ "tr.DisplayName", "tr" },
		{ "tr.Name", "Language::tr" },
		{ "ts.DisplayName", "ts" },
		{ "ts.Name", "Language::ts" },
		{ "tt.DisplayName", "tt" },
		{ "tt.Name", "Language::tt" },
		{ "tw.DisplayName", "tw" },
		{ "tw.Name", "Language::tw" },
		{ "ty.DisplayName", "ty" },
		{ "ty.Name", "Language::ty" },
		{ "ug.DisplayName", "ug" },
		{ "ug.Name", "Language::ug" },
		{ "uk.DisplayName", "uk" },
		{ "uk.Name", "Language::uk" },
		{ "ur.DisplayName", "ur" },
		{ "ur.Name", "Language::ur" },
		{ "uz.DisplayName", "uz" },
		{ "uz.Name", "Language::uz" },
		{ "ve.DisplayName", "ve" },
		{ "ve.Name", "Language::ve" },
		{ "vi.DisplayName", "vi" },
		{ "vi.Name", "Language::vi" },
		{ "vo.DisplayName", "vo" },
		{ "vo.Name", "Language::vo" },
		{ "wa.DisplayName", "wa" },
		{ "wa.Name", "Language::wa" },
		{ "wo.DisplayName", "wo" },
		{ "wo.Name", "Language::wo" },
		{ "xh.DisplayName", "xh" },
		{ "xh.Name", "Language::xh" },
		{ "yi.DisplayName", "yi" },
		{ "yi.Name", "Language::yi" },
		{ "yo.DisplayName", "yo" },
		{ "yo.Name", "Language::yo" },
		{ "za.DisplayName", "za" },
		{ "za.Name", "Language::za" },
		{ "zh.DisplayName", "zh" },
		{ "zh.Name", "Language::zh" },
		{ "zu.DisplayName", "zu" },
		{ "zu.Name", "Language::zu" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyAdsEditor_Language_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyAdsEditor,
		nullptr,
		"Language",
		"Language",
		Z_Construct_UEnum_EasyAdsEditor_Language_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAdsEditor_Language_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyAdsEditor_Language_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAdsEditor_Language_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyAdsEditor_Language()
	{
		if (!Z_Registration_Info_UEnum_Language.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Language.InnerSingleton, Z_Construct_UEnum_EasyAdsEditor_Language_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Language.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrackingDescription;
class UScriptStruct* FTrackingDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrackingDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrackingDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackingDescription, Z_Construct_UPackage__Script_EasyAdsEditor(), TEXT("TrackingDescription"));
	}
	return Z_Registration_Info_UScriptStruct_TrackingDescription.OuterSingleton;
}
template<> EASYADSEDITOR_API UScriptStruct* StaticStruct<FTrackingDescription>()
{
	return FTrackingDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrackingDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_language_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_language_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_localizationDesctiption_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_localizationDesctiption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackingDescription>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_language_MetaData[] = {
		{ "Category", "TrackingDescription" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackingDescription, language), Z_Construct_UEnum_EasyAdsEditor_Language, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_language_MetaData)) }; // 2489430909
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_localizationDesctiption_MetaData[] = {
		{ "Category", "TrackingDescription" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_localizationDesctiption = { "localizationDesctiption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackingDescription, localizationDesctiption), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_localizationDesctiption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_localizationDesctiption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackingDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_language_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewProp_localizationDesctiption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackingDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAdsEditor,
		nullptr,
		&NewStructOps,
		"TrackingDescription",
		sizeof(FTrackingDescription),
		alignof(FTrackingDescription),
		Z_Construct_UScriptStruct_FTrackingDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackingDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_TrackingDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrackingDescription.InnerSingleton, Z_Construct_UScriptStruct_FTrackingDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrackingDescription.InnerSingleton;
	}
	void UAdmobSetting::StaticRegisterNativesUAdmobSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdmobSetting);
	UClass* Z_Construct_UClass_UAdmobSetting_NoRegister()
	{
		return UAdmobSetting::StaticClass();
	}
	struct Z_Construct_UClass_UAdmobSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidAppId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidAppId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidBannerUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidBannerUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidInterstitialUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidInterstitialUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidRewardedVideoAdUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidRewardedVideoAdUnit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidTestDeviceList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidTestDeviceList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AndroidTestDeviceList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidResultTestDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidResultTestDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableAndroidTestSuite_MetaData[];
#endif
		static void NewProp_EnableAndroidTestSuite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAndroidTestSuite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidUnity_MetaData[];
#endif
		static void NewProp_DisableAndroidUnity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidUnity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidVungle_MetaData[];
#endif
		static void NewProp_DisableAndroidVungle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidVungle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidChartboost_MetaData[];
#endif
		static void NewProp_DisableAndroidChartboost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidChartboost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidFacebook_MetaData[];
#endif
		static void NewProp_DisableAndroidFacebook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidFacebook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidApplovin_MetaData[];
#endif
		static void NewProp_DisableAndroidApplovin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidApplovin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidAdColony_MetaData[];
#endif
		static void NewProp_DisableAndroidAdColony_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidAdColony;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidIronSource_MetaData[];
#endif
		static void NewProp_DisableAndroidIronSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidIronSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidInMobi_MetaData[];
#endif
		static void NewProp_DisableAndroidInMobi_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidInMobi;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidTapJoy_MetaData[];
#endif
		static void NewProp_DisableAndroidTapJoy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidTapJoy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableAndroidIMobile_MetaData[];
#endif
		static void NewProp_DisableAndroidIMobile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableAndroidIMobile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulateAndroidLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulateAndroidLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulateAndroidLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOSAppId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IOSAppId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOSBannerUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IOSBannerUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOSInterstitialUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IOSInterstitialUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOSRewardedVideoAdUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IOSRewardedVideoAdUnit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IOSTestDeviceList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOSTestDeviceList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IOSTestDeviceList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTrackingDescriptionList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTrackingDescriptionList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserTrackingDescriptionList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulateIOSLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulateIOSLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulateIOSLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSUnity_MetaData[];
#endif
		static void NewProp_DisableIOSUnity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSUnity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSVungle_MetaData[];
#endif
		static void NewProp_DisableIOSVungle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSVungle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSChartboost_MetaData[];
#endif
		static void NewProp_DisableIOSChartboost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSChartboost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSFacebook_MetaData[];
#endif
		static void NewProp_DisableIOSFacebook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSFacebook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSApplovin_MetaData[];
#endif
		static void NewProp_DisableIOSApplovin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSApplovin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSAdColony_MetaData[];
#endif
		static void NewProp_DisableIOSAdColony_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSAdColony;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSIronSource_MetaData[];
#endif
		static void NewProp_DisableIOSIronSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSIronSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSInMobi_MetaData[];
#endif
		static void NewProp_DisableIOSInMobi_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSInMobi;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSTapJoy_MetaData[];
#endif
		static void NewProp_DisableIOSTapJoy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSTapJoy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableIOSIMobile_MetaData[];
#endif
		static void NewProp_DisableIOSIMobile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableIOSIMobile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdmobSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAdsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AdmobSetting.h" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidAppId_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android AppID" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidAppId = { "AndroidAppId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, AndroidAppId), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidAppId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidBannerUnit_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android Banner AdUnit" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidBannerUnit = { "AndroidBannerUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, AndroidBannerUnit), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidBannerUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidBannerUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidInterstitialUnit_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android Interstitial AdUnit" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidInterstitialUnit = { "AndroidInterstitialUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, AndroidInterstitialUnit), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidInterstitialUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidInterstitialUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android RewardVideo AdUnit" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit = { "AndroidRewardedVideoAdUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, AndroidRewardedVideoAdUnit), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidTestDeviceList_Inner = { "AndroidTestDeviceList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidTestDeviceList_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Android TestDevice" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidTestDeviceList = { "AndroidTestDeviceList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, AndroidTestDeviceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidTestDeviceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidTestDeviceList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidResultTestDevice_MetaData[] = {
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidResultTestDevice = { "AndroidResultTestDevice", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, AndroidResultTestDevice), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidResultTestDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidResultTestDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_EnableAndroidTestSuite_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Enable Mediation TestSute" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
		{ "ToolTip", "this require minSdkVersion 16, else will package fail" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_EnableAndroidTestSuite_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->EnableAndroidTestSuite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_EnableAndroidTestSuite = { "EnableAndroidTestSuite", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_EnableAndroidTestSuite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_EnableAndroidTestSuite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_EnableAndroidTestSuite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidUnity_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable Unity" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidUnity_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidUnity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidUnity = { "DisableAndroidUnity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidUnity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidUnity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidUnity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidVungle_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable Vungle" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidVungle_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidVungle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidVungle = { "DisableAndroidVungle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidVungle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidVungle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidVungle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidChartboost_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable Chartboost" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidChartboost_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidChartboost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidChartboost = { "DisableAndroidChartboost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidChartboost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidChartboost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidChartboost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidFacebook_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable Facebook" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidFacebook_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidFacebook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidFacebook = { "DisableAndroidFacebook", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidFacebook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidFacebook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidFacebook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidApplovin_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable Applovin" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidApplovin_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidApplovin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidApplovin = { "DisableAndroidApplovin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidApplovin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidApplovin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidApplovin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidAdColony_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable AdColony" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidAdColony_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidAdColony = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidAdColony = { "DisableAndroidAdColony", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidAdColony_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidAdColony_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidAdColony_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIronSource_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable IronSource" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIronSource_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidIronSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIronSource = { "DisableAndroidIronSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIronSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIronSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIronSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidInMobi_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable InMobi" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidInMobi_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidInMobi = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidInMobi = { "DisableAndroidInMobi", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidInMobi_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidInMobi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidInMobi_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidTapJoy_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable TapJoy" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidTapJoy_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidTapJoy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidTapJoy = { "DisableAndroidTapJoy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidTapJoy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidTapJoy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidTapJoy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIMobile_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "Disable I-Mobile" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIMobile_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableAndroidIMobile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIMobile = { "DisableAndroidIMobile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIMobile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIMobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIMobile_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateAndroidLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateAndroidLocation_MetaData[] = {
		{ "Category", "Android" },
		{ "DisplayName", "SimulateAndroidLocation" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateAndroidLocation = { "SimulateAndroidLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, SimulateAndroidLocation), Z_Construct_UEnum_EasyAdsEditor_SimulateLocation, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateAndroidLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateAndroidLocation_MetaData)) }; // 2021505068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSAppId_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS AppID" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSAppId = { "IOSAppId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, IOSAppId), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSAppId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSBannerUnit_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS Banner AdUnit" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSBannerUnit = { "IOSBannerUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, IOSBannerUnit), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSBannerUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSBannerUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSInterstitialUnit_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS Interstitial AdUnit" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSInterstitialUnit = { "IOSInterstitialUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, IOSInterstitialUnit), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSInterstitialUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSInterstitialUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSRewardedVideoAdUnit_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS RewardVideo AdUnit" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSRewardedVideoAdUnit = { "IOSRewardedVideoAdUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, IOSRewardedVideoAdUnit), METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSRewardedVideoAdUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSRewardedVideoAdUnit_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSTestDeviceList_Inner = { "IOSTestDeviceList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSTestDeviceList_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "IOS TestDevice" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSTestDeviceList = { "IOSTestDeviceList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, IOSTestDeviceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSTestDeviceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSTestDeviceList_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_UserTrackingDescriptionList_Inner = { "UserTrackingDescriptionList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTrackingDescription, METADATA_PARAMS(nullptr, 0) }; // 1507185485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_UserTrackingDescriptionList_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "TrackingUseageDescription" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_UserTrackingDescriptionList = { "UserTrackingDescriptionList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, UserTrackingDescriptionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_UserTrackingDescriptionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_UserTrackingDescriptionList_MetaData)) }; // 1507185485
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateIOSLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateIOSLocation_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "SimulateIOSLocation" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateIOSLocation = { "SimulateIOSLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdmobSetting, SimulateIOSLocation), Z_Construct_UEnum_EasyAdsEditor_SimulateLocation, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateIOSLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateIOSLocation_MetaData)) }; // 2021505068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSUnity_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable Unity" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSUnity_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSUnity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSUnity = { "DisableIOSUnity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSUnity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSUnity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSUnity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSVungle_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable Vungle" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSVungle_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSVungle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSVungle = { "DisableIOSVungle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSVungle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSVungle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSVungle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSChartboost_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable Chartboost" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSChartboost_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSChartboost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSChartboost = { "DisableIOSChartboost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSChartboost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSChartboost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSChartboost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSFacebook_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable Facebook" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSFacebook_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSFacebook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSFacebook = { "DisableIOSFacebook", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSFacebook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSFacebook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSFacebook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSApplovin_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable Applovin" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSApplovin_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSApplovin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSApplovin = { "DisableIOSApplovin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSApplovin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSApplovin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSApplovin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSAdColony_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable AdColony" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSAdColony_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSAdColony = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSAdColony = { "DisableIOSAdColony", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSAdColony_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSAdColony_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSAdColony_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIronSource_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable IronSource" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIronSource_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSIronSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIronSource = { "DisableIOSIronSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIronSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIronSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIronSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSInMobi_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable InMobi" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSInMobi_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSInMobi = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSInMobi = { "DisableIOSInMobi", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSInMobi_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSInMobi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSInMobi_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSTapJoy_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable TapJoy" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSTapJoy_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSTapJoy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSTapJoy = { "DisableIOSTapJoy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSTapJoy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSTapJoy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSTapJoy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIMobile_MetaData[] = {
		{ "Category", "IOS" },
		{ "DisplayName", "Disable I-Mobile" },
		{ "ModuleRelativePath", "Private/AdmobSetting.h" },
	};
#endif
	void Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIMobile_SetBit(void* Obj)
	{
		((UAdmobSetting*)Obj)->DisableIOSIMobile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIMobile = { "DisableIOSIMobile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdmobSetting), &Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIMobile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIMobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIMobile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdmobSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidBannerUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidInterstitialUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidRewardedVideoAdUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidTestDeviceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidTestDeviceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_AndroidResultTestDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_EnableAndroidTestSuite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidUnity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidVungle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidChartboost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidFacebook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidApplovin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidAdColony,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIronSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidInMobi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidTapJoy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableAndroidIMobile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateAndroidLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateAndroidLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSBannerUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSInterstitialUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSRewardedVideoAdUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSTestDeviceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_IOSTestDeviceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_UserTrackingDescriptionList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_UserTrackingDescriptionList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateIOSLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_SimulateIOSLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSUnity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSVungle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSChartboost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSFacebook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSApplovin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSAdColony,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIronSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSInMobi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSTapJoy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdmobSetting_Statics::NewProp_DisableIOSIMobile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdmobSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdmobSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdmobSetting_Statics::ClassParams = {
		&UAdmobSetting::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdmobSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UAdmobSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdmobSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdmobSetting()
	{
		if (!Z_Registration_Info_UClass_UAdmobSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdmobSetting.OuterSingleton, Z_Construct_UClass_UAdmobSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdmobSetting.OuterSingleton;
	}
	template<> EASYADSEDITOR_API UClass* StaticClass<UAdmobSetting>()
	{
		return UAdmobSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdmobSetting);
	UAdmobSetting::~UAdmobSetting() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::EnumInfo[] = {
		{ SimulateLocation_StaticEnum, TEXT("SimulateLocation"), &Z_Registration_Info_UEnum_SimulateLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2021505068U) },
		{ Language_StaticEnum, TEXT("Language"), &Z_Registration_Info_UEnum_Language, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2489430909U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::ScriptStructInfo[] = {
		{ FTrackingDescription::StaticStruct, Z_Construct_UScriptStruct_FTrackingDescription_Statics::NewStructOps, TEXT("TrackingDescription"), &Z_Registration_Info_UScriptStruct_TrackingDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrackingDescription), 1507185485U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdmobSetting, UAdmobSetting::StaticClass, TEXT("UAdmobSetting"), &Z_Registration_Info_UClass_UAdmobSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdmobSetting), 1245865492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_4211048129(TEXT("/Script/EasyAdsEditor"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAdsEditor_Private_AdmobSetting_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
