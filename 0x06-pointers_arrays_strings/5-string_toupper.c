#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * string_toupper - converts lowercase to uppercase
 * @ch: string to convert
 * Return: upper case to pointer
 */

char *string_toupper(char *ch)
{
	char *temp = ch;

	while (*ch)
	{
		if (islower(*ch))
		{
			*ch = toupper(*ch);
		}
		ch++;
	}
	return (temp);
}
