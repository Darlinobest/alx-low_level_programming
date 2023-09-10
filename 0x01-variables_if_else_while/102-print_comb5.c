#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function outputs a combo of rwo two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 <= 98; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 <= 99; num_2++)
		{
			putchar((num_1 / 10) + '0');
			putchar((num_1 % 10) + '0');
			putchar(' ');
			putchar((num_2 / 10) + '0');
			putchar((num_2 % 10) + '0');
			if (num_1 == 98 && num_2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
