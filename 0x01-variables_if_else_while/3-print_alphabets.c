#include <stdio.h>
/**
 * main - Entry point for the prgram
 *
 * This function displays alphabets in lowercases and uppercases
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	char ch_1 = 'A';

	/* first while loop to itereate through lowerecae alphabets */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* second while loop to iterate through uppercase alphabets */
	while (ch_1 <= 'Z')
	{
		putchar(ch_1);
		ch_1++;
	}

	/* print a new line after both loops finish executing */
	putchar('\n');
	return (0);
}
