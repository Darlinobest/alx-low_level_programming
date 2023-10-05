#include <stdio.h>
#include <stdlib.h>

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
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return NULL;
	}
    for (i = 0; i < ac; i++)
    {
	    total_len += strlen(av[i]) + 1;
    }
    concatenated = (char *)malloc(total_len * sizeof(char));
    if (concatenated == NULL)
    {
	    return NULL;
    }
    concatenated[0] = '\0';
    for (int i = 0; i < ac; i++)
    {
	    strcat(concatenated, av[i]);
	    if (i < ac - 1)
	    {
		    strcat(concatenated, " ");
	    }
    }
    return concatenated;
}
