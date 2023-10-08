#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for ptr
 * @nmemb: number of elements
 * @size:size of bytes
 * Return: ptr to allocated memory if successful,
 * NULL if malloc failed and also is nmemb || size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
