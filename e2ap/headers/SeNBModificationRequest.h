/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SeNBModificationRequest_H_
#define	_SeNBModificationRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SeNBModificationRequest */
typedef struct SeNBModificationRequest {
	ProtocolIE_Container_9515P48_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeNBModificationRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeNBModificationRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_SeNBModificationRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_SeNBModificationRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SeNBModificationRequest_H_ */
#include <asn_internal.h>