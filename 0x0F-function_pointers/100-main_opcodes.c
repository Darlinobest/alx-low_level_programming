#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode
 * @argc: argument count
 * @argv: array to store arguments from cmd line
 * Return: Always 0 upon success
 */

int main(int argc, char *argv[])
{
	int i, num_of_bytes;
	char *opcode;

	opcode = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < num_of_bytes)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (1 < (num_of_bytes - 1))
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
