#include <xparameters.h>
#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"


int main()
{
    init_platform() ;
    uint32_t* gpio_0 = XPAR_AXI_GPIO_0_BASEADDR ;
    uint32_t* gpio_1 = XPAR_AXI_GPIO_1_BASEADDR ;
    uint8_t foo = 1;
    *gpio_0 = foo ;
    uint8_t result = *gpio_1 ;

    printf("inverted: %x\r\n",result) ;
    cleanup_platform()

    return 0;
}
