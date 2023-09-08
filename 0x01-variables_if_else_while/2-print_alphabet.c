#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function displays a to z to the console
 *
 * Return: Always 0
 */
int main(void)
{
	/* declare variable ch and initialized it to a */
	char ch = 'a';

	/* while loop condition to iterate through all the alpabets */
	while (ch <= 'z')
	{
		/* function to print to the console output*/
		putchar(ch);

		/* to increment after printing letter a */
		ch++;
	}
	return (0);
}
