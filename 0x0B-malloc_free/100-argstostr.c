#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	int i, total_len = 0;
	char *con_cat;
	char *token;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	con_cat = (char *)malloc(total_len * sizeof(char) + ac);
	if (con_cat == NULL)
	{
		return (NULL);
	}
	con_cat[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		token = strtok(av[i], " ");
		while (token != NULL)
		{
			strcat(con_cat, token);
			strcat(con_cat, " ");
			token = strtok(NULL, " ");
		}
		if (i < ac - 1)
		{
			strcat(con_cat, "\n");
		}
	}
	return (con_cat);
}
