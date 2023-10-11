#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using pointer function
 * @name: name to be printer
 * @f: pointer function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
