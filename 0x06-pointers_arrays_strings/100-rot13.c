#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @ch: string to be encoded
 * Return: resulting string
 */

char *rot13(char *ch)
{
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (ch[i] == x[j])
			{
				ch[i] = y[j];
				break;
			}
		}
	}
	return (ch);
}
