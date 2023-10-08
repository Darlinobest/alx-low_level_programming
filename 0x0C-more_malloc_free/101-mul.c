#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ERROR_MESSAGE "ERROR"

/**
 * is_a_digit - checks if a string contains a non digit
 * @s: string string to be reviewed
 * Return: 0 if non-digit, else 1
 */

int is_a_digit(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return:  length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error -  handles the main error
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - find the product of 2 +ve numbers
 * @argc: counting integer
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, total_len, i, carry_number, digit1, digit2, *result, a = 0;

	s1 = argv[1];
	s2 = argv[2];

	if (argc != 3 || !is_a_digit(s1) || !is_a_digit(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total_len = len1 + len2 + 1;
	result = malloc(sizeof(int) * total_len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[total_len] - '0';
		carry_number = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
			digit2 = s2[len2] - '0';
		carry_number += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry_number % 10;
		carry_number /= 10;
	}
	if (carry_number > 0)
		result[len1 + len2 + 1] += carry_number;
	for (i = 0; i < total_len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
