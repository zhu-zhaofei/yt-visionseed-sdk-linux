/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Thu Jun 27 18:53:26 2019. */

#ifndef PB_CAMERAEXPOSUREPARAMS_PB_H_INCLUDED
#define PB_CAMERAEXPOSUREPARAMS_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _CameraExposureParams_ExposureType {
    CameraExposureParams_ExposureType_MANUAL = 0,
    CameraExposureParams_ExposureType_AUTO = 1
} CameraExposureParams_ExposureType;
#define _CameraExposureParams_ExposureType_MIN CameraExposureParams_ExposureType_MANUAL
#define _CameraExposureParams_ExposureType_MAX CameraExposureParams_ExposureType_AUTO
#define _CameraExposureParams_ExposureType_ARRAYSIZE ((CameraExposureParams_ExposureType)(CameraExposureParams_ExposureType_AUTO+1))

/* Struct definitions */
typedef struct _CameraExposureParams {
    int32_t camId;
    CameraExposureParams_ExposureType type;
    bool has_timeUs;
    int32_t timeUs;
    bool has_gain;
    int32_t gain;
/* @@protoc_insertion_point(struct:CameraExposureParams) */
} CameraExposureParams;

/* Default values for struct fields */

/* Initializer values for message structs */
#define CameraExposureParams_init_default        {0, _CameraExposureParams_ExposureType_MIN, false, 0, false, 0}
#define CameraExposureParams_init_zero           {0, _CameraExposureParams_ExposureType_MIN, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define CameraExposureParams_camId_tag           1
#define CameraExposureParams_type_tag            2
#define CameraExposureParams_timeUs_tag          3
#define CameraExposureParams_gain_tag            4

/* Struct field encoding specification for nanopb */
extern const pb_field_t CameraExposureParams_fields[5];

/* Maximum encoded size of messages (where known) */
#define CameraExposureParams_size                35

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define CAMERAEXPOSUREPARAMS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
