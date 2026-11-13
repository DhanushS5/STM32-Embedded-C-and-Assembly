#include <stdint.h>
int main(void)
{
	int a;
	__asm volatile("MOV %0,#1":"+r"(a): :);
    /* Loop forever */
	for(;;);
}
