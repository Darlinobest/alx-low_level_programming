#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: integer one
 * @b: integer two
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}

/**
 * op_sub - substract two integers
 * @a: integer one
 * @b: integer two
 * Return: difference of two integers
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - multiplies two integers
 * @a: integer one
 * @b: integer two
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - divides two integers
 * @a: integer one
 * @b: integer two
 * Return: divident of two integers
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
 * op_mod - gets the modulus of two integers
 * @a: integer one
 * @b: integer two
 * Return: the modulus of two integrs
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
