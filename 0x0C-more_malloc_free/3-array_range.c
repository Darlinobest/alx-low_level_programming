#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: least value of array
 * @max: max value of the array
 * Return: pointer to the newly allocated array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, range;

	range = max - min;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i <= range)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
