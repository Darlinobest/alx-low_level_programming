#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *  main - Entry point of the program
 *
 *  The functio generates random numbers for +ve, -ve and zero
 *
 *  Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* print positive number if n > 0 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* print 0 if n == 0 */
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* print negative number if n < 0 */
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
