#include "main.h"

/**
 * _realloc - reallocates a memory block using 
 * malloc and free
 * @ptr: pointer to memory previouly allocated memory
 * @old_size: size in btyes for ptr
 * @new_size: size of the memory block in bytes
 * Return: pointer to memory, NULL if malloc fails, etc
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);
	
	if (new_size > old_size)
	{}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
