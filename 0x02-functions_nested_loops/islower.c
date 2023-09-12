#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;
	
	letter = _islower('H');
	_putchar(letter + '0');
	letter = _islower('o');
        _putchar(letter + '0');
	letter = _islower(108);
        _putchar(letter + '0');
	_putchar('\n');
	return (0);
}
