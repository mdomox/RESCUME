/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../downloads/DSRC_R36_Source.ASN"
 * 	`asn1c -fcompound-names`
 */

#include <asn_internal.h>

#include "PriorityState.h"

int
PriorityState_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
PriorityState_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

void
PriorityState_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	PriorityState_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
PriorityState_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	PriorityState_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
PriorityState_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	PriorityState_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
PriorityState_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PriorityState_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
PriorityState_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	PriorityState_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
PriorityState_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PriorityState_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_PriorityState_value2enum_1[] = {
	{ 0,	10,	"noneActive" },
	{ 1,	4,	"none" },
	{ 2,	9,	"requested" },
	{ 3,	6,	"active" },
	{ 4,	16,	"activeButIhibitd" },
	{ 5,	7,	"seccess" },
	{ 6,	7,	"removed" },
	{ 7,	9,	"clearFail" },
	{ 8,	10,	"detectFail" },
	{ 9,	11,	"detectClear" },
	{ 10,	5,	"abort" },
	{ 11,	11,	"delayTiming" },
	{ 12,	12,	"extendTiming" },
	{ 13,	15,	"preemptOverride" },
	{ 14,	16,	"adaptiveOverride" },
	{ 15,	8,	"reserved" }
	/* This list is extensible */
};
static unsigned int asn_MAP_PriorityState_enum2value_1[] = {
	10,	/* abort(10) */
	3,	/* active(3) */
	4,	/* activeButIhibitd(4) */
	14,	/* adaptiveOverride(14) */
	7,	/* clearFail(7) */
	11,	/* delayTiming(11) */
	9,	/* detectClear(9) */
	8,	/* detectFail(8) */
	12,	/* extendTiming(12) */
	1,	/* none(1) */
	0,	/* noneActive(0) */
	13,	/* preemptOverride(13) */
	6,	/* removed(6) */
	2,	/* requested(2) */
	15,	/* reserved(15) */
	5	/* seccess(5) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_PriorityState_specs_1 = {
	asn_MAP_PriorityState_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PriorityState_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1	/* Strict enumeration */
};
static ber_tlv_tag_t asn_DEF_PriorityState_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PriorityState = {
	"PriorityState",
	"PriorityState",
	PriorityState_free,
	PriorityState_print,
	PriorityState_constraint,
	PriorityState_decode_ber,
	PriorityState_encode_der,
	PriorityState_decode_xer,
	PriorityState_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PriorityState_tags_1,
	sizeof(asn_DEF_PriorityState_tags_1)
		/sizeof(asn_DEF_PriorityState_tags_1[0]), /* 1 */
	asn_DEF_PriorityState_tags_1,	/* Same as above */
	sizeof(asn_DEF_PriorityState_tags_1)
		/sizeof(asn_DEF_PriorityState_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PriorityState_specs_1	/* Additional specs */
};

