#include "main.h"

/**
 * str_concat - function to concatenate two strings
 * @s1: first string to consider
 * @s2: second string to be appended to s1
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, result;
	char *cat_str;

	len1 = strlen(s1);
	len2 = strlen(s2);
	result = len1 + len2;
	if (len1 == 0 || len2 == 0)
	{
		s1 = " ";
		s2 = " ";
	}
	cat_str = (char *)malloc(sizeof(char) * (result + 1));

	if (cat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		cat_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		cat_str[i + j] = s2[j];
	}
	cat_str[result] = '\0';

	return (cat_str);
}
