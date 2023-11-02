#include "main.h"


/**
 * count_word - counts the number of words in a string
 * @str: input string to be considered
 * Return: word count upon sucess
 */
int count_word(char *str)
{
	int state_of_word;
	int word_count = 0;

	while (*str)
	{
		if (*str != ' ' && state_of_word == 0)
		{
			state_of_word = 1;
			word_count++;
		}
		else if ((*str) == ' ')
		{
			state_of_word = 0;
		}
		str++;
	}
	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: Pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **result;
	char *tmp;
	int i, j = 0, k = 0, len = 0, words, begin, stop;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				stop = i;
				tmp = (char *)malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < stop)
				{
					*tmp++ = str[begin++];
				}
				*tmp = '\0';
				result[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			begin = i;
	}
	result[k] = NULL;
	return (result);
}
