#include "paging.h"

#include "shell_main.h"
#include "../libc/io.h"
#include "../libc/memory.h"
#include "../libc/string.h"

void allocate_page(void)
{
    uint32_t physical_address = 0;
    uint32_t page = kmalloc(1000, 1, &physical_address);

    char page_str[16] = "";
    hex_to_ascii(page, page_str);

    char physical_address_str[16] = "";
    hex_to_ascii(physical_address, physical_address_str);

    print("Memory has been allocated. ", OUTPUT_COLOR);
    print("Page: ", OUTPUT_COLOR);
    println(page_str, VARIABLE_COLOR);
    print("Physical Address: ", OUTPUT_COLOR);
    println(physical_address_str, VARIABLE_COLOR);
}
