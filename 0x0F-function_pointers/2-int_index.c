#include "function_pointers.h"

/**
 * int_index - searchers for an integer
 * @array: array to be search
 * @size: size of the array
 * @cmp: pointer to function that is used to
 * compare values
 * Return: -1 is size is <= 0 or no elemet found
 * or returns the index of the first element used
 * to compare
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}
