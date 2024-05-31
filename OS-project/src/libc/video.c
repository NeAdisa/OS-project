#include "video.h"

#include "../drivers/screen.h"

enum video_types get_video_type(void)
{
    if (get_video_colored_type() == 0x00)
    {
        return VIDEO_TYPE_NONE;
    }
    else if (get_video_colored_type() == 0x20)
    {
        return VIDEO_TYPE_COLOR;
    }
    else if (get_video_colored_type() == 0x30)
    {
        return VIDEO_TYPE_MONO;
    }
    else
    {
        return VIDEO_TYPE_UNKNOWN;
    }
}
