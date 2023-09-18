#include "main.h"

/**
 * puts2 - print each character followed by a new line
 * @str: pointer to character
 * Return: Always 0
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x+=2)
	{
		if (str[x] >= '0' && str[x] <= '8')
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
