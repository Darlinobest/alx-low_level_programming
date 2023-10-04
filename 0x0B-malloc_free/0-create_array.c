#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates char array with specific char
 * @size: depicts the size of the array
 * @c: specific char to be placed in array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *c_Array = (char *)malloc((size - 1) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (c_Array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		c_Array[i] = c;
	}
	c_Array[size] = '\0';
	return (c_Array);
}
