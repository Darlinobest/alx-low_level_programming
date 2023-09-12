#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    _putchar(r + '0');
    _putchar('\n');
    r = _abs(0);
    _putchar(r + '0');
    _putchar('\n');
    r = _abs(1);
    _putchar(r + '0');
    _putchar('\n');
    r = _abs(-8);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
