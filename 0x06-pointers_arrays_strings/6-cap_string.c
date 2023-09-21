#include "main.h"
/**
 * cap_string - capitalizes first letter of a string
 * @ch: string to consider
 * Return: the resulting string
 */

char *cap_string(char *ch)
{
	int i, j;
	char token[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{'};

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (i == 0; ch[i] < 'a' && ch[i] < 'z')
		{
			ch[i] -= 32;
		}
		for (j = o; j < 13; j++)
		{
			if (ch[i] == token[j])
			{
				if (ch[i + 1] >= 'a' && ch[i + 1] <= 'z')
				{
					ch[i + 1] -= 32;
				}
			}
		}
	}
	return (ch);
}
