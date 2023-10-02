#include "main.h"
#include <string.h>

/**
 * _strncat - cat n bytes from one string to another
 * @dest: pointer to char,string to append to
 * @src: pointer to char, string to add
 * @n: num of bytes of str to cat
 *
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int len_of_dest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_of_dest + i] = src[i];
	}
	dest[len_of_dest + i] = '\0';
	return (dest);
}
