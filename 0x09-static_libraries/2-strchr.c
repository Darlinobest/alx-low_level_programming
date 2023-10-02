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

	i = 0;
	for (;;)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] == 0)
		{
			return (NULL);
		}
		i++;
	}
}
