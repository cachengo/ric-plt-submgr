/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_MeasurementFailureCause_Item_H_
#define	_MeasurementFailureCause_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReportCharacteristics.h"
#include "Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* MeasurementFailureCause-Item */
typedef struct MeasurementFailureCause_Item {
	ReportCharacteristics_t	 measurementFailedReportCharacteristics;
	Cause_t	 cause;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementFailureCause_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementFailureCause_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementFailureCause_Item_H_ */
#include <asn_internal.h>