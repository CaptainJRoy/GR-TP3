/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SNMPv2-PDU"
 * 	found in "../RFC3416/RFC3416.asn1"
 */

#ifndef	_GetRequest_PDU_H_
#define	_GetRequest_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDU.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GetRequest-PDU */
typedef PDU_t	 GetRequest_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetRequest_PDU;
asn_struct_free_f GetRequest_PDU_free;
asn_struct_print_f GetRequest_PDU_print;
asn_constr_check_f GetRequest_PDU_constraint;
ber_type_decoder_f GetRequest_PDU_decode_ber;
der_type_encoder_f GetRequest_PDU_encode_der;
xer_type_decoder_f GetRequest_PDU_decode_xer;
xer_type_encoder_f GetRequest_PDU_encode_xer;
oer_type_decoder_f GetRequest_PDU_decode_oer;
oer_type_encoder_f GetRequest_PDU_encode_oer;
per_type_decoder_f GetRequest_PDU_decode_uper;
per_type_encoder_f GetRequest_PDU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GetRequest_PDU_H_ */
#include <asn_internal.h>