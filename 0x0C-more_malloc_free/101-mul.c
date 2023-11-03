#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @str: int to be checked
 * Return: 1 if str is a digit, 0 otherwise
 */
int _isdigit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * error - prints error message
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * strlen_recursion - calculates the length of string
 * @str: the string to be considered
 * Return: the length of string
 */
int strlen_recursion(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (0);
	return (i + strlen_recursion(str + 1));
}

/**
 * main - multiplies two integers
 * @argc: argument count
 * @argv: stores the arguments passed in
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int *result;
	int i, num1, carry, num2, len1, len2, tot_len, len, flag = 0;
	char *ptr_s1, *ptr_s2;

	ptr_s1 = argv[1], ptr_s2 = argv[2];
	if (argc != 3 || !_isdigit(ptr_s1) || !_isdigit(ptr_s2))
		error();
	len1 = strlen_recursion(ptr_s1), len2 = strlen_recursion(ptr_s2);
	tot_len = len1 + len2 + 1;
	len = len1 + len2;
	result = malloc(sizeof(int) * tot_len);
	if (!result)
		return (1);
	for (i = 0; i <= len; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = ptr_s1[len1] - '0';
		carry = 0;
		for (len2 = strlen_recursion(ptr_s2) - 1; len2 >= 0; len2--)
		{
			num2 = ptr_s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < tot_len - 1; i++)
	{
		if (result[i])
			flag = 1;
		if (flag)
			_putchar(result[i] + '0');
	}
	if (!flag)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
