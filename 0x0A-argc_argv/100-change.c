#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: argument count from command line
 * @argv: array to store arguments from command line
 *
 * Return: 0 for successful execution, 1 for error
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coins = 0;
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
