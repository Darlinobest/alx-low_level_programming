#include "main.h"

/**
 * _memset - fills memory with const byte
 * @s: pointer to char
 * @b: byte to fill up
 * @n: size of byte to fill
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
