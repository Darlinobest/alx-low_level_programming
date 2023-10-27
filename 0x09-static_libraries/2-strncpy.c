#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
