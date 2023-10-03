#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: counts the argument passed
 * @argv: array to store string to be counted
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
