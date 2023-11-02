#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes to be allocated
 * Return: pointer to the allocated memory
 * else 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
