#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of new block
 * Return: ptr if new_size == old_size
 * NULL if malloc fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
