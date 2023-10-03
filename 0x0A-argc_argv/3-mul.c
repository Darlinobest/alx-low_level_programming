#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the products of two numbers
 * @argc: counter of argument
 * @argv:container to store value of string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int product = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
