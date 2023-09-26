#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to considered
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, flag;
	unsigned int length = 0;

	while (*s != '\0')
	{
		flag = 0;

		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				length++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			return (length);
		}
		s++;
	}
	return (length);
}
