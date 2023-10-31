#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: array to store arguments
 * Return: concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	char *cat_str;
	int x, i, j, index;

	if (ac == 0)
		return (NULL);

	for (x = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			x++;
		x++;
	}

	cat_str = malloc((x + 1) * sizeof(char));

	if (cat_str == NULL)
	{
		free(cat_str);
		return (NULL);
	}

	for (i = j = index = 0; index < x; j++, index++)
	{
		if (av[i][j] == '\0')
		{
			cat_str[index] = '\n';
			i++;
			index++;
			j = 0;
		}
		if (index < x - 1)
			cat_str[index] = av[i][j];
	}
	cat_str[index] = '\0';

	return (cat_str);
}
