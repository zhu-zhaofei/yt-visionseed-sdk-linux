/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.2 at Fri Apr 17 15:16:46 2020. */

#include "CameraExposureParams.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t CameraExposureParams_fields[5] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, CameraExposureParams, camId, camId, 0),
    PB_FIELD(  2, UENUM   , REQUIRED, STATIC  , OTHER, CameraExposureParams, type, camId, 0),
    PB_FIELD(  3, INT32   , OPTIONAL, STATIC  , OTHER, CameraExposureParams, timeUs, type, 0),
    PB_FIELD(  4, INT32   , OPTIONAL, STATIC  , OTHER, CameraExposureParams, gain, timeUs, 0),
    PB_LAST_FIELD
};



/* @@protoc_insertion_point(eof) */
