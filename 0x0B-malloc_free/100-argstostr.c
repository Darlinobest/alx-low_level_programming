#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer to a new string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, len = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	result = malloc(len * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[count] = av[i][j];
			count++;
		}
		if (i < ac - 1)
		{
			result[count] = '\n';
			count++;
		}
	}
	return (result);
}
