#include "main.h"

/**
 * create_array - creates an array and initialises it with
 * specific character
 * @size: size of the array
 * @c: character to be initialized
 * Return: pointer to array upon sucess or NULL
 * upon failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr_Array;

	ptr_Array = (char *)malloc(sizeof(char) * (size));
	if (size == 0)
	{
		return (NULL);
	}
	if (ptr_Array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr_Array[i] = c;
	}
	ptr_Array[size] = '\0';
	return (ptr_Array);
}
