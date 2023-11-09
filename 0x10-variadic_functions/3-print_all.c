#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments
 * passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j, x;
	char *str;
	const char total_arg[] = "cifs";

	i = 0, x = 0;
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (total_arg[j])
		{
			if (format[i] == total_arg[j] && x)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), x = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), x = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), x = 1;
			break;
		case 's':
			str = va_arg(args, char *), x = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}
