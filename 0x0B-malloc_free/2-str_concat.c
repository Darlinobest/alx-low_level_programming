#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - cats two strings
 * @s1: first string to be appended to
 * @s2: second string to append
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, total_len = 0;
	char *cat_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	cat_string = (char *)malloc((total_len) * sizeof(char));

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;

	if (cat_string == NULL)
	{
		return (NULL);
	}
	strcpy(cat_string, s1);
	strcat(cat_string, s2);
	return (cat_string);
}
