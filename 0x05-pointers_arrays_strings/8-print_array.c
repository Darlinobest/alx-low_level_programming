#include "main.h"
#include <stdio.h>

/**
 * print_array - print value of an array
 * @a: pointer to integer
 * @n: integer to determine size of array
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
