#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point for the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on successful execution,
 * 98 for incorrect argument count,
 * and 99 for invalid operator;
 * 100 for division by 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", operation(a, b));

	return (0);
}
