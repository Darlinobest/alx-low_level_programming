#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints array of strings
 * @separator: string to be printed between strings
 * @n: number input to the function
 */

void
print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	str = va_arg(ap, char *);

	for (i = 0; i < n; i++)
	{
		if (str != NULL)
			printf("%s",  str);
		else
			printf("(nil)");
		if (i < n - 1  && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
