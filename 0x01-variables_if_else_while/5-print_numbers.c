#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function prints numbers from 0 to 9 to the console
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
