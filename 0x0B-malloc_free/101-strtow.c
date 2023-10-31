#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: Pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **result;
	int i, j, k, len;

	j = 0, k = 0;
	len = strlen(str);
	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}
	result = malloc(sizeof(char *));
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			if (k > 0)
			{
				result[j][k] = '\0';
				k = 0;
				j++;
				result = realloc(result, (j + 1) * sizeof(char *));
			}
		}
		else
		{
			if (k == 0)
			{
				result[j] = malloc(len * sizeof(char));
			}
			result[j][k] = str[i];
			k++;
		}
	}
	if (k > 0)
	{
		result[j][k] = '\0';
		j++;
		result = realloc(result, (j + 1) * sizeof(char *));
	}
	result[j] = NULL;
	return (result);
}
