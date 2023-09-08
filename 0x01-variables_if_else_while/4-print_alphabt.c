#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function prints letters to the console but skips letter q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
       	while (ch <= 'z')
       	{
	       	if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
