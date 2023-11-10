#include "variadic_functions.h"


/**
 * print_all - print all formatted args
 * @format: format string specifying
 * the type of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	print_formatted_args(format, args);

	printf("\n");
	va_end(args);
}

/**
 * print_formatted_args - formats and prints args.
 * @format: format string indicating the types
 * of arguments passed to the function.
 * @args: list of variable argument
 * Return: no return.
 */
void print_formatted_args(const char *format, va_list args)
{
	unsigned int i = 0, j, x = 0;
	char *str;
	const char total_arg[] = "cfis";

	while (format && format[i])
	{
		j = 0;
		while (total_arg[j])
		{
			if (format[i] == total_arg[j] && x)
			{
				printf(", ");
				break;
			}
			 j++;
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
				printf("(nil)");
			printf("%s", str);
			break;
		} i++;
	}
}
