#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates char in string
 * @s: destination string
 * @c: char to be locate
 * Return: Resulting string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
