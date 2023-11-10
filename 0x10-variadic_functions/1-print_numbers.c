#include "variadic_functions.h"

/**
 * print_numbers - prints comma separated numbers
 * followed by a new line
 * @separator: string to be printed in between number
 * @n: number of arguments passed in
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int current_number;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_number = va_arg(args, int);
		printf("%d", current_number);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
