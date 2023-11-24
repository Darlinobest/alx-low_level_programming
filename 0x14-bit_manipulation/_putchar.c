#include <unistd.h>

/**
 * _putchar - prints a char
 * @c: char to be printed
 * Return: 1 bytes
 */

int _putchar(const char c)
{
	return (write(1, &c, 1));
}
