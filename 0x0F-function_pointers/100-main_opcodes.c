#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of its own main func
 * @argc: argument count to count input by user
 * @argv: argument vector to store values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *opcode;
	int x, no_of_bytes;

	opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < no_of_bytes; x++)
	{
		printf("%x02", opcode[x] & 0XFF);
		if (x != no_of_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
