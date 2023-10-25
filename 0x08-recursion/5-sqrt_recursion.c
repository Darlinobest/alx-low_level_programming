#include "main.h"

/**
 * _sqrt_recursion - prints sqrt of natural numbers
 * @n: natural number to find its sqrt
 * Return: sqrt of a natural number or -1
 * if not found
 */

int _sqrt_recursion(int n)
{
	return (find_square_root(n, 1));
}
/**
 * find_square_root - logic to find sqrt of natural number
 * @num: natural number to find its sqrt root
 * @guess: current guess for the sqrt
 * Return: sqrt of natural number
 */
int find_square_root(int num, int guess)
{
	if (guess * guess == num)
	{
		return (guess);
	}
	if (guess * guess > num)
	{
		return (-1);
	}
	else
	{
		return (find_square_root(num, guess + 1));
	}
}
