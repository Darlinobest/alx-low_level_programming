#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - calculates the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: The Sum of a + b as sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - calculates the diff of a and b
 * @a: first integer
 * @b: second integer
 * Return: The difference of a - b as diff
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}
/**
 * op_mul - calculates the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: the product of a * b as prod
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}
/**
 * op_div - calculates the division of a and b
 * @a: first integer
 * @b: second integer
 * Return: The integer division of a / b as div
 */
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div = a / b;
	return (div);
}
/**
 * op_mod - calculates the remainder of integer division
 * @a: first integer
 * @b: second integer
 * Return: The modulus of a % b as mod
 */
int op_mod(int a, int b)
{
	int mod;
	
	if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	mod = a % b;
	return (mod);
}
