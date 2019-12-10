/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "E2SM-gNB-X2-callProcessID.h"

static asn_TYPE_member_t asn_MBR_E2SM_gNB_X2_callProcessID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_gNB_X2_callProcessID, callProcess_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CallProcess_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"callProcess-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_gNB_X2_callProcessID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_gNB_X2_callProcessID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* callProcess-ID */
};
static asn_SEQUENCE_specifics_t asn_SPC_E2SM_gNB_X2_callProcessID_specs_1 = {
	sizeof(struct E2SM_gNB_X2_callProcessID),
	offsetof(struct E2SM_gNB_X2_callProcessID, _asn_ctx),
	asn_MAP_E2SM_gNB_X2_callProcessID_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_gNB_X2_callProcessID = {
	"E2SM-gNB-X2-callProcessID",
	"E2SM-gNB-X2-callProcessID",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_gNB_X2_callProcessID_tags_1,
	sizeof(asn_DEF_E2SM_gNB_X2_callProcessID_tags_1)
		/sizeof(asn_DEF_E2SM_gNB_X2_callProcessID_tags_1[0]), /* 1 */
	asn_DEF_E2SM_gNB_X2_callProcessID_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_gNB_X2_callProcessID_tags_1)
		/sizeof(asn_DEF_E2SM_gNB_X2_callProcessID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_gNB_X2_callProcessID_1,
	1,	/* Elements count */
	&asn_SPC_E2SM_gNB_X2_callProcessID_specs_1	/* Additional specs */
};

