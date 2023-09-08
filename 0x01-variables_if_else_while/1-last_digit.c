#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point of the program
 *
 * This function pints meessage to the console
 *
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);

	/* Calculating and extracting the last digit */
	n = n%10;

	/* condition for n greater than 5 */
	if(n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}

	/* condition for n equal to 0 */
	if(n == 0)
	{
		printf("%d and is 0\n", n);
	}

	/* condition for n less than 6 and not equal to 0 */
	if(n < 6 && n != 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
