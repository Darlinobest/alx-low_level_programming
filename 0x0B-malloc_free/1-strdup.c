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
	size_t len;
	char *copy;

	len = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}

	copy = (char *)malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
