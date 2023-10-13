#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints an array of numbers
 * @separator: constant to separate two numbers
 * @n: depicts the total number to be printed
 */

void
print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *number_separator;

	va_start(ap, n);
	number_separator = (separator != NULL) ? separator : ", ";

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf("%s", number_separator);
		printf("%d", va_arg(ap, unsigned int));
	}
	va_end(ap);
	printf("\n");
}
