#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function prints alphabets in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
