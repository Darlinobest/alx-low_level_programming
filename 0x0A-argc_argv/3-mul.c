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
	int product;

	product = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		printf("%d\n", product);
	}
	return (0);
}
