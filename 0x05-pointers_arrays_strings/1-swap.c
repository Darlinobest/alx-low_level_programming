#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: inteeger to be swapped
 * @b: integer to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
