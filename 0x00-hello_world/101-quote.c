#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * This program displays a message to the std error outout
 *
 * Return: Always 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora korpar, 2015-10-19\n",59);
	return (1);
}
