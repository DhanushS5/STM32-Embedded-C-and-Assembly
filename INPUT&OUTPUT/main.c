#include <stdint.h>
int main(void)
{
	int a;
	__asm volatile("MOV R0,#1\n\t""MOV R1,#2\n\t""ADD %0,R0,R1":"=r"(a): :"r0", "r1");
    /* Loop forever */
	for(;;);
}

