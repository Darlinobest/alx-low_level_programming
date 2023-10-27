#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of argument in command line
 *
 * @argv: array to store arguments in command line
 *
 * Return: the arguments count
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
