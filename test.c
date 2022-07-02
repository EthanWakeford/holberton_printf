#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len = 124;
	int len2;
    void *addr;

    _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    addr = (void *)0x7ffe637541f0;
    printf("Length:[%d, %i]\n", len2, len2);
	_printf("Length:[%d, %i]\n", len2, len2);
	_printf("%d\n", len);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Unknown:[%r]\n");
    return (0);
}
