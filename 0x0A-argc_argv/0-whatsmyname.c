#include <stdlib.h>
#include <stdio.h>

/**
 * main - print name of the program
 * @argc: counter the command line argument
 * @argv: container to store value of string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Invalid");
	}
	return (0);
}
