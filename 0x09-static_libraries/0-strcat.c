#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function to cat two strings
 * @dest: pointer to char, string to append to
 * @src: ponter to char, string to add
 * Return: concatenated value
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	y = 0;
	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
