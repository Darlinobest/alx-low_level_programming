#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of argument in command line
 *
 * @argv: array to store command line arguments
 *
 * Return: 0 upon success
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
