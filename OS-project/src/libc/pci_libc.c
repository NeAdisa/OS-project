#include "pci_libc.h"

char * get_pci_vendor_str(uint8_t bus, uint8_t slot)
{
    uint16_t vendor_id = pci_get_vendor_id(bus, slot);

    if (vendor_id != 0xffff)
    {
        switch (vendor_id)
        {
            case 0x8086:
            {
                return "Intel Corporation";
            }
            default:
            {
                return "Unknown";
            }
        }
    }
    else
    {
        return "No Device";
    }
}
