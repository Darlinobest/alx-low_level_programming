#include "main.h"

/**
 * factorial - function to calc factorial of an integer
 * @n: integer to calculate the factorial
 * Return: factorial of the integer
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
