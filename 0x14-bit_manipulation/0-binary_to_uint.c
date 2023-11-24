#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: string to be converted
 * Return: binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans;

	ans = 0;
	if (b == NULL)
		return (0);
	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
	}
	for (b--; b >= 0; b--)
	{
		ans <<= 1;
		ans += (*b - '0');
	}
	return (ans);
}
