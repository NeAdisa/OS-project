#include "speaker.h"

#include "../cpu/ports.h"
#include "../cpu/timer.h"

void play_sound(uint32_t frequency)
{
    set_PIT_2(frequency);

    uint8_t tmp = port_byte_in(0x61);
    if (tmp != (tmp | 3))
    {
        port_byte_out(0x61, tmp | 3);
    }
}

void nosound(void)
{
    uint8_t tmp = port_byte_in(0x61) & 0xFC;
    port_byte_out(0x61, tmp);
}
