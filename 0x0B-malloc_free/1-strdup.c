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
	unsigned int len;
	char *copy;

	len = strlen(str);

	copy = (char *)malloc((len) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
