#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function prints letters to the console but skips letter q and e
 *
 * Return: ALways 0
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			/* skip the letters by incrementing ch */
			ch++;
			continue; 
		}

		/* print letters */
		putchar(ch);
		/* move to the next character */
		ch++;
	}
	putchar('\n');
	return (0);
}
