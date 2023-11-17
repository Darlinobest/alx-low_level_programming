#include <stdio.h>

void my_constructor(void)  __attribute__((constructor));

/**
 * my_constructor - posseses constructor attribute
 * Return: Nothing
 */

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
