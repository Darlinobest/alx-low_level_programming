#include "main.h"

/**
 * clear_bit - sets the value of a bit to
 * 0 at a given index
 * @n: pointer to unsigned long int input
 * @index: position of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
