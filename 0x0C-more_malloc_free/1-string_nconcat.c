#include "main.h"

/**
 * string_nconcat - function to concat two strings
 * @s1: string one to be considered
 * @s2: string two to be cosnidered
 * @n: number of bytes
 * Return: pointed to memory, concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len_s1, tot_len, len_s2;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len_s2)
		n = len_s2;

	tot_len = len_s1 + n;

	ptr = malloc(tot_len + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < tot_len; i++)
	{
		if (i < len_s1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len_s1];
	}
	ptr[i] = '\0';
	return (ptr);
}
