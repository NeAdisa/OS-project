#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

void set_PIT_2(uint32_t frequency);
void init_timer(uint32_t frequency);
void wait_timer(uint32_t ticks);

#endif
