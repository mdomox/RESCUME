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

#include "stdafx.h"
#include <asn_internal.h> 

#include "PathHistoryPointType-01.h"

static int
memb_latOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_longOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_elevationOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -2048 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_timeOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_heading_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -128 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_PathHistoryPointType_01_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PathHistoryPointType_01, latOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_latOffset_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"latOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PathHistoryPointType_01, longOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_longOffset_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"longOffset"
		},
	{ ATF_POINTER, 5, offsetof(struct PathHistoryPointType_01, elevationOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_elevationOffset_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"elevationOffset"
		},
	{ ATF_POINTER, 4, offsetof(struct PathHistoryPointType_01, timeOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_timeOffset_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timeOffset"
		},
	{ ATF_POINTER, 3, offsetof(struct PathHistoryPointType_01, posAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionalAccuracy,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"posAccuracy"
		},
	{ ATF_POINTER, 2, offsetof(struct PathHistoryPointType_01, heading),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_heading_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"heading"
		},
	{ ATF_POINTER, 1, offsetof(struct PathHistoryPointType_01, speed),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransmissionAndSpeed,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"speed"
		},
};
static ber_tlv_tag_t asn_DEF_PathHistoryPointType_01_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PathHistoryPointType_01_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latOffset at 1317 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* longOffset at 1323 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* elevationOffset at 1329 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeOffset at 1335 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* posAccuracy at 1340 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* heading at 1343 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* speed at 1349 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PathHistoryPointType_01_specs_1 = {
	sizeof(struct PathHistoryPointType_01),
	offsetof(struct PathHistoryPointType_01, _asn_ctx),
	asn_MAP_PathHistoryPointType_01_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PathHistoryPointType_01 = {
	"PathHistoryPointType-01",
	"PathHistoryPointType-01",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PathHistoryPointType_01_tags_1,
	sizeof(asn_DEF_PathHistoryPointType_01_tags_1)
		/sizeof(asn_DEF_PathHistoryPointType_01_tags_1[0]), /* 1 */
	asn_DEF_PathHistoryPointType_01_tags_1,	/* Same as above */
	sizeof(asn_DEF_PathHistoryPointType_01_tags_1)
		/sizeof(asn_DEF_PathHistoryPointType_01_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PathHistoryPointType_01_1,
	7,	/* Elements count */
	&asn_SPC_PathHistoryPointType_01_specs_1	/* Additional specs */
};

