#include "main.h"

/**
 * _pow_recursion - function to raise an integer to pow
 * @x: integer to be raised
 * @y: power to raise the integer
 * Return: Answer of integer raised
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *_pow_recursion(x, y - 1));
	}
}
