#include <stdint.h>
int main(void)
{
	int a = 10;
	int b = 5;
	int result;
    __asm volatile("CMP %1,%2\n\t"
    		"BGT DONE\n\t"
    		"MOV %0,#0\n\t"
    		"B END\n\t"
    		"DONE:\n\t"
    		"MOV %0,#1\n\t"
    		"END:":"=&r"(result):"r"(a),"r"(b):"cc");
	for(;;);
}
