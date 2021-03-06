/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_Registration_Request_H_
#define	_Registration_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Registration_Request {
	Registration_Request_start	= 0,
	Registration_Request_stop	= 1,
	/*
	 * Enumeration is extensible
	 */
	Registration_Request_partial_stop	= 2,
	Registration_Request_add	= 3
} e_Registration_Request;

/* Registration-Request */
typedef long	 Registration_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Registration_Request;
asn_struct_free_f Registration_Request_free;
asn_struct_print_f Registration_Request_print;
asn_constr_check_f Registration_Request_constraint;
ber_type_decoder_f Registration_Request_decode_ber;
der_type_encoder_f Registration_Request_encode_der;
xer_type_decoder_f Registration_Request_decode_xer;
xer_type_encoder_f Registration_Request_encode_xer;
per_type_decoder_f Registration_Request_decode_uper;
per_type_encoder_f Registration_Request_encode_uper;
per_type_decoder_f Registration_Request_decode_aper;
per_type_encoder_f Registration_Request_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Registration_Request_H_ */
#include "asn_internal.h"
