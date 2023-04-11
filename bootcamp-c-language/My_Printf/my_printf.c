#include <stdio.h>
#include "my_printf.h" // Include the header file for my_printf

int main(void)
{
    int x = 10;
    char *s = "hello";
    void *p = (void *)0x12345678;

    my_printf("%d %s %p\n", x, s, p);
    return 0;
}
