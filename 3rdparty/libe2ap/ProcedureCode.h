/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_ProcedureCode_H_
#define	_ProcedureCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ProcedureCode */
typedef long	 ProcedureCode_t;

/* Implementation */
#define ProcedureCode_id_ricSubscription	((ProcedureCode_t)201)
#define ProcedureCode_id_ricSubscriptionDelete	((ProcedureCode_t)202)
#define ProcedureCode_id_ricServiceUpdate	((ProcedureCode_t)203)
#define ProcedureCode_id_ricControl	((ProcedureCode_t)204)
#define ProcedureCode_id_ricIndication	((ProcedureCode_t)205)
#define ProcedureCode_id_ricServiceQuery	((ProcedureCode_t)206)
extern asn_per_constraints_t asn_PER_type_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProcedureCode;
asn_struct_free_f ProcedureCode_free;
asn_struct_print_f ProcedureCode_print;
asn_constr_check_f ProcedureCode_constraint;
ber_type_decoder_f ProcedureCode_decode_ber;
der_type_encoder_f ProcedureCode_encode_der;
xer_type_decoder_f ProcedureCode_decode_xer;
xer_type_encoder_f ProcedureCode_encode_xer;
per_type_decoder_f ProcedureCode_decode_uper;
per_type_encoder_f ProcedureCode_encode_uper;
per_type_decoder_f ProcedureCode_decode_aper;
per_type_encoder_f ProcedureCode_encode_aper;
#define ProcedureCode_id_loadIndication	((ProcedureCode_t)2)
#define ProcedureCode_id_errorIndication	((ProcedureCode_t)3)
#define ProcedureCode_id_x2Setup	((ProcedureCode_t)6)
#define ProcedureCode_id_reset	((ProcedureCode_t)7)
#define ProcedureCode_id_eNBConfigurationUpdate	((ProcedureCode_t)8)
#define ProcedureCode_id_resourceStatusReportingInitiation	((ProcedureCode_t)9)
#define ProcedureCode_id_resourceStatusReporting	((ProcedureCode_t)10)
#define ProcedureCode_id_endcX2Setup	((ProcedureCode_t)36)
#define ProcedureCode_id_endcConfigurationUpdate	((ProcedureCode_t)37)
#define ProcedureCode_id_gNBStatusIndication	((ProcedureCode_t)45)

#ifdef __cplusplus
}
#endif

#endif	/* _ProcedureCode_H_ */
#include "asn_internal.h"
