#include "main.h"

/**
 * puts_half - print half part of a string
 * @str: pointer to character
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len, x, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (x = len / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
