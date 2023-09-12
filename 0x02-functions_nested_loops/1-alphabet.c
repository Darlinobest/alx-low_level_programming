#include "main.h"
/**
 * main - prints alphabet to output in loerwcase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
