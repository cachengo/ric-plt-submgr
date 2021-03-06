/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "CSIReportPerCSIProcessItem.h"

#include "SubbandCQIList.h"
#include "ProtocolExtensionContainer.h"
static int
memb_rI_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_rI_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  8 }	/* (1..8,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_CSIReportPerCSIProcessItem_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSIReportPerCSIProcessItem__Member, rI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_rI_constr_3,  memb_rI_constraint_2 },
		0, 0, /* No default value */
		"rI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSIReportPerCSIProcessItem__Member, widebandCQI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WidebandCQI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"widebandCQI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSIReportPerCSIProcessItem__Member, subbandSize),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubbandSize,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subbandSize"
		},
	{ ATF_POINTER, 2, offsetof(struct CSIReportPerCSIProcessItem__Member, subbandCQIList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubbandCQIList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subbandCQIList"
		},
	{ ATF_POINTER, 1, offsetof(struct CSIReportPerCSIProcessItem__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8858P37,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Member_oms_2[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* widebandCQI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subbandSize */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* subbandCQIList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct CSIReportPerCSIProcessItem__Member),
	offsetof(struct CSIReportPerCSIProcessItem__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	5,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	5,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSIReportPerCSIProcessItem_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_CSIReportPerCSIProcessItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CSIReportPerCSIProcessItem_specs_1 = {
	sizeof(struct CSIReportPerCSIProcessItem),
	offsetof(struct CSIReportPerCSIProcessItem, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CSIReportPerCSIProcessItem = {
	"CSIReportPerCSIProcessItem",
	"CSIReportPerCSIProcessItem",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CSIReportPerCSIProcessItem_tags_1,
	sizeof(asn_DEF_CSIReportPerCSIProcessItem_tags_1)
		/sizeof(asn_DEF_CSIReportPerCSIProcessItem_tags_1[0]), /* 1 */
	asn_DEF_CSIReportPerCSIProcessItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSIReportPerCSIProcessItem_tags_1)
		/sizeof(asn_DEF_CSIReportPerCSIProcessItem_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_CSIReportPerCSIProcessItem_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_CSIReportPerCSIProcessItem_1,
	1,	/* Single element */
	&asn_SPC_CSIReportPerCSIProcessItem_specs_1	/* Additional specs */
};

