/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_TraceActivation_H_
#define	_TraceActivation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRANTraceID.h"
#include "InterfacesToTrace.h"
#include "TraceDepth.h"
#include "TraceCollectionEntityIPAddress.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TraceActivation */
typedef struct TraceActivation {
	EUTRANTraceID_t	 eUTRANTraceID;
	InterfacesToTrace_t	 interfacesToTrace;
	TraceDepth_t	 traceDepth;
	TraceCollectionEntityIPAddress_t	 traceCollectionEntityIPAddress;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TraceActivation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TraceActivation;

#ifdef __cplusplus
}
#endif

#endif	/* _TraceActivation_H_ */
#include <asn_internal.h>