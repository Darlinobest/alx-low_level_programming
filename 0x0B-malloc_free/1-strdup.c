#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function to copy a string as parameter
 * @str: str to be copied
 * Return: a copied string
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	copy = (char *)malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
