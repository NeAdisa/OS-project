#include "init.h"

#include "../cpu/isr.h"

void init(void)
{
    isr_install();
    irq_install();
}
