#include "variadic_functions.h"

/**
 * print_strings - prints comma separated strings
 * @separator: string printed in between words
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *current_str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args, char *);
		if (current_str)
		{
			printf("%s", current_str);
		}
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
