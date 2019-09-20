/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_AerialUEsubscriptionInformation_H_
#define	_AerialUEsubscriptionInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AerialUEsubscriptionInformation {
	AerialUEsubscriptionInformation_allowed	= 0,
	AerialUEsubscriptionInformation_not_allowed	= 1
	/*
	 * Enumeration is extensible
	 */
} e_AerialUEsubscriptionInformation;

/* AerialUEsubscriptionInformation */
typedef long	 AerialUEsubscriptionInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AerialUEsubscriptionInformation;
asn_struct_free_f AerialUEsubscriptionInformation_free;
asn_struct_print_f AerialUEsubscriptionInformation_print;
asn_constr_check_f AerialUEsubscriptionInformation_constraint;
ber_type_decoder_f AerialUEsubscriptionInformation_decode_ber;
der_type_encoder_f AerialUEsubscriptionInformation_encode_der;
xer_type_decoder_f AerialUEsubscriptionInformation_decode_xer;
xer_type_encoder_f AerialUEsubscriptionInformation_encode_xer;
oer_type_decoder_f AerialUEsubscriptionInformation_decode_oer;
oer_type_encoder_f AerialUEsubscriptionInformation_encode_oer;
per_type_decoder_f AerialUEsubscriptionInformation_decode_uper;
per_type_encoder_f AerialUEsubscriptionInformation_encode_uper;
per_type_decoder_f AerialUEsubscriptionInformation_decode_aper;
per_type_encoder_f AerialUEsubscriptionInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AerialUEsubscriptionInformation_H_ */
#include <asn_internal.h>