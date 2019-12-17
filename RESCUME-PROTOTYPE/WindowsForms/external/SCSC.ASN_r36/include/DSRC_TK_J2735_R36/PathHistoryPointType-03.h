/*************************************************************************
 * 
 * SCSC CONFIDENTIAL
 * __________________
 * 
 * Copyright (c) [2009] - [2012] 
 * SubCarrier System Corp. (SCSC) 
 * All Rights Reserved.
 * 
 * NOTICE:  All information contained herein is, and remains,
 * the property of SubCarrier System Corp. (SCSC) and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to SubCarrier System Corp. (SCSC)
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from SubCarrier System Corp. (SCSC).
 *
 *
 * This file is subject to the terms and conditions of use defined 
 * in the files 'LICENSE.rft' or 'LICENSE.pdf' which is part of this 
 * source code package.
 *
 * LIC: #Battelle_001_01_dbfff42a90727d02153511a33480572b#
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c) [SCSCrev09]
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_R36_Source.ASN"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_PathHistoryPointType_03_H_
#define	_PathHistoryPointType_03_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PathHistoryPointType-03 */
typedef OCTET_STRING_t	 PathHistoryPointType_03_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathHistoryPointType_03;
asn_struct_free_f PathHistoryPointType_03_free;
asn_struct_print_f PathHistoryPointType_03_print;
asn_constr_check_f PathHistoryPointType_03_constraint;
ber_type_decoder_f PathHistoryPointType_03_decode_ber;
der_type_encoder_f PathHistoryPointType_03_encode_der;
xer_type_decoder_f PathHistoryPointType_03_decode_xer;
xer_type_encoder_f PathHistoryPointType_03_encode_xer;

/* Define supported Utility Calls */
void PathHistoryPointType_03_Init (PathHistoryPointType_03_t* theObj);
//void PathHistoryPointType_03_ToBlob (PathHistoryPointType_03_t* theObj, char* theBlob);
//void PathHistoryPointType_03_FromBlob (PathHistoryPointType_03_t* theObj, char* theBlob);


#ifdef __cplusplus
}
#endif

#endif	/* _PathHistoryPointType_03_H_ */
