#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - variadic func to sum all its parameters
 * @n: argument count, show total num to sum
 * Return: Always 0
 */

int
sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
