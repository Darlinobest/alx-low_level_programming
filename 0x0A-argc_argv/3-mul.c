#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number from argument
 *
 * @argc: number of argument passed in command line
 *
 * @argv: array to store argument in command line
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int i, product;

	product = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
