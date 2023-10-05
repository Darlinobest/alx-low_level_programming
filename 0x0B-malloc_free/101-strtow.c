#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, x, y;

	flag = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	words = count_word(str);

	matrix = malloc((words + 1) * sizeof(char *));

	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			end = i - 1;
			matrix[k] = malloc((end - start + 2) * sizeof(char));
			if (matrix[k] == NULL)
			{

				for (i = 0; i < k; i++)
					free(matrix[i]);
				free(matrix);
				return (NULL);
			}
			for (c = 0; start <= end; start++, c++)
				matrix[k][c] = str[start];
			matrix[k][c] = '\0';
			k++;
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
