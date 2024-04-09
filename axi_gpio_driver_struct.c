#include <xparameters.h>
#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"

typedef struct{
    volatile u32 data ;
} axi_gpio ;

axi_gpio *gpio_0 = XPAR_AXI_GPIO_0_BASEADDR ;
axi_gpio *gpio_1 = XPAR_AXI_GPIO_1_BASEADDR ;

int main()
{
    
    init_platform() ;
    uint8_t foo = 0b11110000;
    gpio_1->data = foo ;
    u32 result = gpio_0->data ;
    printf("Inverted: %x\r\n", result) ;
    cleanup_platform() ;

    return 0;
