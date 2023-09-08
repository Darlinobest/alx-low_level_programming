#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function prints uses an integer inside putchar to print numbers from 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int num_1;

	for (num_1 = 0; num_1 < 10; num_1++)
	{
		putchar((num_1 % 10) + '0');
	}
	putchar('\n');
	return (0);
}
