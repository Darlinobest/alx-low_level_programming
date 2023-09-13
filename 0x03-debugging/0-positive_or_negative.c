#include <stdio.h>
#include "main.h"

void positive_or_negative(int c)
{
	if (c > 0)
	{
		printf("%d is positive\n", c);
	}
	else if (c == 0)
	{
		printf("%d is zero\n", c);
	}
	else
	{
		printf("%d is negative\n", c);
	}
}
