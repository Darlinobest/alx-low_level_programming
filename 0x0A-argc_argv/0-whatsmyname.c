#include <stdio.h>

/**
 * main - A program that prints its name
 * followed by a new line
 *
 * @argc: the number of argument in command line
 *
 * @argv: array to stores arguments command line
 *
 * Return: 0 upon success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
