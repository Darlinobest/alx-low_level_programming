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
	unsigned int len1, i;
	unsigned int len2;
	unsigned int len;
	char *cat_string;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}

	if (n >= len2)
        {
                n = len2;
        }
	len = len1 + n;
	cat_string = malloc(len + 1);

	if (cat_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if(i < len1)
			cat_string[i] = s1[i];
		else
		{
			cat_string[i] = s2[i - len1];
		}
	}
	cat_string[i] = '\0';

	return (cat_string);

}
