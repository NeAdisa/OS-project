#include "halt.h"

void halt(void)
{
    asm volatile("cli");
    asm volatile("hlt");
}
