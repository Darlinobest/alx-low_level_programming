#include "main.h"

/**
 * factorial - calculates the factorial of numbers
 * @n: integer to be considered
 * Return: factorial of a number(n)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
