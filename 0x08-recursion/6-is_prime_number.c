#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * @n: the number to be checked
 * Return: 1 if number is prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (my_prime_number(n, n - 1));
}
/**
 * my_prime_number - logic to find  prime 
 * @num: number to test if its prime or not
 * @guess: current guess for prime
 * Return: 1 if prime, 0 if not prime
 */

int my_prime_number(int num, int guess)
{
	if (guess == 1)
		return (1);
	if (num % guess == 0 && guess > 0)
		return (0);
	return (my_prime_number(num, guess - 1));
}
