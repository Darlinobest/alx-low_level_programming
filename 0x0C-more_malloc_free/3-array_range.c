#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Minimum value of array
 * @max: Maximum value of array
 * Return: NULL if min > max, NULL if malloc fails
 * point to the new array
 */

int *array_range(int min, int max)
{
	int i;
	int num_Element;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	num_Element = max - min + 1;

	ptr = malloc(sizeof(int) * num_Element);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num_Element; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
