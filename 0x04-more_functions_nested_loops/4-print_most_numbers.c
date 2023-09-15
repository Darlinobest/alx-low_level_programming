#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int j;

	while (j <= 9)
	{
		if (j == 2 || j == 4)
		{
			j++;
			continue;
		}
		_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
