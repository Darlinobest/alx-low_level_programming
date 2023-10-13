#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * given as argument
 * @format: a list of type of argumets pointed 
 * to a function which does not
 * change the address nor what it is pointing to
 */

void
print_all(const char * const format, ...)
{
	va_list args;
	unsigned int x = 0, y, c = 0;
	char *pstr;
	const char store[] = "cifs";

	va_start(args, format);

	while (format && format[x])
	{
		y = 0;
		while (store[y])
		{
			if (format[x] == store[y] && c)
			{
				printf(", ");
				break;
			}
			y++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(args, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), c = 1;
			break;
		case 's':
			pstr = va_arg(args, char *), c = 1;
			if (!pstr)
			{
				printf("(nil)");
				break;
			}
			printf("%s", pstr);
			break;
		}
		x++;
	}
	printf("\n"), va_end(args);
}
