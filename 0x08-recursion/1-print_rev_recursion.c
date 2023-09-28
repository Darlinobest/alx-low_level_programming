#include "main.h"
#include<stdio.h>

/**
 * _print_rev_recursion - function to reverse a string
 * @s: string to be revised
 */
void _print_rev_recursion(char *s)
{
	int i, j, len;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
