#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;

	while (haystack[x] != '\0')
	{
		int y = 0;
		int match = 1;

		while (needle[y] != '\0')
		{
			if (haystack[x + y] != needle[y])
			{
				match = 0;
				break;
			}
			y++;
		}
		if (match)
		{
			return (&haystack[x]);
		}
		x++;
	}
	return (NULL);
}
