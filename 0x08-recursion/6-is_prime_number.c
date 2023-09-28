#include "main.h"

int my_prime_number(int n, int i);

/**
 * is_prime_number - suggest if an integer is a prime or not
 * @n: number to considered
 *
 * Return: 1 if n is a prime, then 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (my_prime_number(n, n - 1));
}

/**
 * my_prime_number - calculates if a number is prime recursively
 * @n: number to be considered
 * @i: iterator
 *
 * Return: 1 if n is prime,and 0 if not
 */
int my_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (my_prime_number(n, i - 1));
}
