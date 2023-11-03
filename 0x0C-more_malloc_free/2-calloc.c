#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements
 * @size: amount of bytes for the array
 * Return: pointer to the allocated memory, NULL
 * if malloc fails or size/nmemb is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
