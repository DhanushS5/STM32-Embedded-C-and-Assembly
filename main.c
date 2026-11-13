int main(void)
{
    int a = 5;

    __asm volatile(
        "ADD %0, %0, #1"
        : "+r" (a)
    );

    for (;;);
}
