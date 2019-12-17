/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_LaneManeuverCode_H_
#define	_LaneManeuverCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaneManeuverCode {
	LaneManeuverCode_unknown	= 0,
	LaneManeuverCode_uTurn	= 1,
	LaneManeuverCode_leftTurn	= 2,
	LaneManeuverCode_rightTurn	= 3,
	LaneManeuverCode_straightAhead	= 4,
	LaneManeuverCode_softLeftTurn	= 5,
	LaneManeuverCode_softRightTurn	= 6
	/*
	 * Enumeration is extensible
	 */
} e_LaneManeuverCode;

/* LaneManeuverCode */
typedef ENUMERATED_t	 LaneManeuverCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneManeuverCode;
asn_struct_free_f LaneManeuverCode_free;
asn_struct_print_f LaneManeuverCode_print;
asn_constr_check_f LaneManeuverCode_constraint;
ber_type_decoder_f LaneManeuverCode_decode_ber;
der_type_encoder_f LaneManeuverCode_encode_der;
xer_type_decoder_f LaneManeuverCode_decode_xer;
xer_type_encoder_f LaneManeuverCode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneManeuverCode_H_ */