#include "main.h"

int check_palindrome(char *str, int start, int end);
/**
 * is_palindrome - accepts string and checks if it is or not
 * @s: string to be checked
 * Return: 1 if palindrome otheerwise 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - logic function for palindrome
 * @str:pointer to string
 * @start: first string
 * @end: last string
 * Return: 1 if palindrome, 0 if otherwise
 */

int check_palindrome(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (str[start] != str[end])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(str, start + 1, end - 1));
	}
}
