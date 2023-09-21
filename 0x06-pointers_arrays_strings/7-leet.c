#include "main.h"

/**
 * leet - encodes string into 1337
 * @ch: string to be encoded
 *
 * Return: the string
 */

char *leet(char *ch)
{
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";
	int i, j;

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ch[i] == x[j])
			{
				ch[i] = y[j];
			}
		}
	}
	return (ch);
}
