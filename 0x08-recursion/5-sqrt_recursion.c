#include "main.h"

/**
 * sqrt_calculator - function to perform logic for square root
 * @num: number to find its square root
 * @i: the current value for the square root
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */

int sqrt_calculator(int num, int i);

/**
 * _sqrt_recursion - function to calc the square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_calculator(n, 1));
}

/**
 * sqrt_calculator - function to perform logic for square root
 * @num: number to find its square root
 * @i: the current value for the square root
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */

int sqrt_calculator(int num, int i)
{
	if (i * i == num)
	{
		return (i);
	}
	if (i * i > num)
	{
		return (-1);
	}
	return (sqrt_calculator(num, i + 1));
}
