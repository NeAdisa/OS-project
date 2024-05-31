#ifndef VIDEO_H
#define VIDEO_H

#include <stdint.h>

enum video_types {
    VIDEO_TYPE_NONE = 0,
    VIDEO_TYPE_COLOR = 1,
    VIDEO_TYPE_MONO = 2,
    VIDEO_TYPE_UNKNOWN = 3,
};

enum video_types get_video_type(void);

#endif
