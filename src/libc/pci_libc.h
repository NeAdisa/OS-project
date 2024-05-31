#ifndef PCI_LIBC_H
#define PCI_LIBC_H

#include "../drivers/pci.h"

char * get_pci_vendor_str(uint8_t bus, uint8_t slot);

#endif
