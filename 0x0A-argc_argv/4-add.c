#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count from command line
 * @argv: array to store arguments from command line
 * Return: the sum of positive numbers
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
