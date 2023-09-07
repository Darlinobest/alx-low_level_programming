#include <unistd.h> /*Header for write function*/

/**
 * main - Entry point of the program
 *
 * This program prints a specific message to the standard error stream.
 *
 * Return: Always 1
 */
int main(void)
{
    /*This message will be printed*/
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /*we use the write function to output the message to stderr (file descriptor 2)*/
    write(2, message, 59);

    /*Return 1 as required*/
    return (1);
}
