/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#include <asn_internal.h>

#include "Position3D.h"

static asn_TYPE_member_t asn_MBR_Position3D_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Position3D, lat),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Position3D, Long),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"long"
		},
	{ ATF_POINTER, 1, offsetof(struct Position3D, elevation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Elevation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"elevation"
		},
};
static ber_tlv_tag_t asn_DEF_Position3D_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Position3D_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lat at 1563 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* long at 1564 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* elevation at 1565 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Position3D_specs_1 = {
	sizeof(struct Position3D),
	offsetof(struct Position3D, _asn_ctx),
	asn_MAP_Position3D_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Position3D = {
	"Position3D",
	"Position3D",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Position3D_tags_1,
	sizeof(asn_DEF_Position3D_tags_1)
		/sizeof(asn_DEF_Position3D_tags_1[0]), /* 1 */
	asn_DEF_Position3D_tags_1,	/* Same as above */
	sizeof(asn_DEF_Position3D_tags_1)
		/sizeof(asn_DEF_Position3D_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Position3D_1,
	3,	/* Elements count */
	&asn_SPC_Position3D_specs_1	/* Additional specs */
};

