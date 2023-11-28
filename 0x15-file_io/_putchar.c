#include <unistd.h>

/**
 * _putchar - prints a single char
 * @c: char to be printed
 * Return: the char and number of bytes
 */

int _putchar(const char c)
{
	return (write(1, &c, 1));
}
