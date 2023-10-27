#include <stdio.h>

/**
 * main - A program that prints its name
 * followed by a new line
 *
 * @argc: the number of argument in command line
 *
 * @argv: array to stores arguments command line
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);	
}
