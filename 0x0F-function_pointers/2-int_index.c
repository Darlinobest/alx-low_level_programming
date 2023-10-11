#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * in an array
 * @array: array to search for integer
 * @size: size of the array
 * @cmp: funtion pointer to array
 * Return: -1 if size is <= 0, searched integers,
 * and -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
