#include "function_pointers.h"
#include <stddef.h>

typedef void(*action)(int);
/**
 * array_iterator - function to execute another func
 * @array: array to store the values
 * @size: size of the array
 * @action: point function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
