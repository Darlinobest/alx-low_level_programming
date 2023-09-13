#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	unsigned long int y, k, next, sum;

	y = 1;
	k = 2;
	sum = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum = sum + y;
		}
		next = y + k;
		y = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
