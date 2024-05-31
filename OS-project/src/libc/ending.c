#include "ending.h"

#include "../cpu/halt.h"
#include "io.h"

void end(void)
{
    println("Halting the CPU...", ERROR_COLOR);
    halt();
}
