#include "main.h"

/**
 * _memcpy - copies bytes from src to dest
 * @dest: destination bytes
 * @src: source bytes to be copied
 * @n: size of bytes
 * Return: resulting bytes to pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
