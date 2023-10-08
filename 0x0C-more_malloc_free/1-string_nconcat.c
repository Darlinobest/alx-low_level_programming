#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concats two strings using bytes n
 * @s1: first string
 * @s2:  second string
 * @n: size of bytes
 * Return: pointer to concatted string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *cat_string;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	cat_string = (char *)malloc(len1 + n + 20);

	if (cat_string == NULL)
	{
		exit(98);
	}

	strcpy(cat_string, s1);
	strncpy(cat_string + len1, s2, n);
	cat_string[len1 + n] = '\0';

	return (cat_string);

}
