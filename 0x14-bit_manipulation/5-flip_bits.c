#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first input
 * @m: second input
 * Return: num of bits to allocate
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; m || n; m >>= 1, n >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}
	return (num_bits);
}
