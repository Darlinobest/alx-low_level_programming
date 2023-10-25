#include "main.h"

/**
 * _pow_recursion - calculates a number raised to a power y
 * @x: number to be raised
 * @y: power to raise the number
 * Return: the power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
