#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix
 * @a: resulting square matrix of diagonal sum
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum_of_first_diagonal, sum_of_second_diagonal;

	sum_of_first_diagonal = 0;
	sum_of_second_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		sum_of_first_diagonal += a[(size * i) + i];
		sum_of_second_diagonal += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum_of_first_diagonal, sum_of_second_diagonal);
}
