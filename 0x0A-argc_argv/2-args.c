#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints every argument it receives in a new line
 * @argc:counter variable of the argument
 * @argv: array to store the value of strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
