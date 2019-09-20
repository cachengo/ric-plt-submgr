/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_EN_DC_ResourceConfiguration_H_
#define	_EN_DC_ResourceConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EN_DC_ResourceConfiguration__pDCPatSgNB {
	EN_DC_ResourceConfiguration__pDCPatSgNB_present	= 0,
	EN_DC_ResourceConfiguration__pDCPatSgNB_not_present	= 1
	/*
	 * Enumeration is extensible
	 */
} e_EN_DC_ResourceConfiguration__pDCPatSgNB;
typedef enum EN_DC_ResourceConfiguration__mCGresources {
	EN_DC_ResourceConfiguration__mCGresources_present	= 0,
	EN_DC_ResourceConfiguration__mCGresources_not_present	= 1
	/*
	 * Enumeration is extensible
	 */
} e_EN_DC_ResourceConfiguration__mCGresources;
typedef enum EN_DC_ResourceConfiguration__sCGresources {
	EN_DC_ResourceConfiguration__sCGresources_present	= 0,
	EN_DC_ResourceConfiguration__sCGresources_not_present	= 1
	/*
	 * Enumeration is extensible
	 */
} e_EN_DC_ResourceConfiguration__sCGresources;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* EN-DC-ResourceConfiguration */
typedef struct EN_DC_ResourceConfiguration {
	long	 pDCPatSgNB;
	long	 mCGresources;
	long	 sCGresources;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EN_DC_ResourceConfiguration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pDCPatSgNB_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mCGresources_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sCGresources_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EN_DC_ResourceConfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_EN_DC_ResourceConfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_EN_DC_ResourceConfiguration_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _EN_DC_ResourceConfiguration_H_ */
#include <asn_internal.h>