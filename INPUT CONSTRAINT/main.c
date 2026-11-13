#include <stdint.h>
int main(void)
{
	int a = 5;
	__asm volatile("MOV R0,%0"::"r"(a):);
    /* Loop forever */
	for(;;);
}
