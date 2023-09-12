#include "main.h"
/**
 * _islower - Entry point
 *
 * This program check for lowercase
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (c);
}
