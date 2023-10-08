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
	char *p;
	unsigned int i, max = new_size;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (p);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
	{
		p[i] = old_ptr[i];
	}
	free(ptr);

	return (p);
}
