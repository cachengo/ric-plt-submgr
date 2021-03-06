/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_GUGroupIDList_H_
#define	_GUGroupIDList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GU_Group_ID;

/* GUGroupIDList */
typedef struct GUGroupIDList {
	A_SEQUENCE_OF(struct GU_Group_ID) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GUGroupIDList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GUGroupIDList;

#ifdef __cplusplus
}
#endif

#endif	/* _GUGroupIDList_H_ */
#include "asn_internal.h"
