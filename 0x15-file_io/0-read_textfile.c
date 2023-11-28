#include "main.h"

/**
 * read_textfile - reads a text file and prints its content
 * to the POSIX std output
 * @filename: name allocated to the file
 * @letters: number of letters to read and print
 * Return: the correct number of lettes read and printed
 * or 0 if error is encoutered
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	read_bytes = fread(buffer, sizeof(char), letters, file);
	if (read_bytes == -1)
	{
		free(buffer);
		fclose(file);

		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (write_bytes);
}
