#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function to execute another function
 * given as a parameter
 * @array: input to integer array
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
