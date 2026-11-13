#include <stdint.h>
int main(void)
{
    int a = 10;
    int b = 20;
    uint32_t apsr;
    __asm volatile( "CMP %1, %2\n\t""MRS %0, APSR": "=r"(apsr): "r"(a), "r"(b): "cc");
}
