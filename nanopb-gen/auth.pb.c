/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Thu Jan 18 12:56:44 2018. */

#include "auth.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t rokid_open_speech_AuthRequest_fields[8] = {
    PB_FIELD(  1, STRING  , REQUIRED, CALLBACK, FIRST, rokid_open_speech_AuthRequest, key, key, 0),
    PB_FIELD(  2, STRING  , REQUIRED, CALLBACK, OTHER, rokid_open_speech_AuthRequest, device_type_id, key, 0),
    PB_FIELD(  3, STRING  , REQUIRED, CALLBACK, OTHER, rokid_open_speech_AuthRequest, device_id, device_type_id, 0),
    PB_FIELD(  4, STRING  , REQUIRED, CALLBACK, OTHER, rokid_open_speech_AuthRequest, service, device_id, 0),
    PB_FIELD(  5, STRING  , REQUIRED, CALLBACK, OTHER, rokid_open_speech_AuthRequest, version, service, 0),
    PB_FIELD(  6, STRING  , REQUIRED, CALLBACK, OTHER, rokid_open_speech_AuthRequest, timestamp, version, 0),
    PB_FIELD(  7, STRING  , REQUIRED, CALLBACK, OTHER, rokid_open_speech_AuthRequest, sign, timestamp, 0),
    PB_LAST_FIELD
};

const pb_field_t rokid_open_speech_AuthResponse_fields[2] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, rokid_open_speech_AuthResponse, result, result, 0),
    PB_LAST_FIELD
};



/* @@protoc_insertion_point(eof) */
