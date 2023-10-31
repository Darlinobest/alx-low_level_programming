#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to duplicated string
 * else NULL upon insufficient memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *duplicate_str;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	duplicate_str = (char *)malloc(sizeof(char) * (len + 1));

	if (duplicate_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		duplicate_str[i] = str[i];
	}
	duplicate_str[i] = '\0';

	return (duplicate_str);
}
