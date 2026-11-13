#include <stdint.h>
int main(void)
{
	__asm volatile("NOP");
    /* Loop forever */
	for(;;);
}
