/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_ENDCX2SetupResponse_H_
#define	_ENDCX2SetupResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ENDCX2SetupResponse */
typedef struct ENDCX2SetupResponse {
	ProtocolIE_Container_8807P32_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ENDCX2SetupResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ENDCX2SetupResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_ENDCX2SetupResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_ENDCX2SetupResponse_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ENDCX2SetupResponse_H_ */
#include "asn_internal.h"