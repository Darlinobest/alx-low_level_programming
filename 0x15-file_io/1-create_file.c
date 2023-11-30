#include "main.h"

/**
 * create_file - creates a file and give it permissions
 * for rw-------
 * @filename: name of the file
 * @text_content: NULL terminated string/content of the file
 * Return: 1 upon success, -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_out;
	ssize_t text_size;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_size = strlen(text_content);
		write_out = write(file_descriptor, text_content, text_size);
	}
	if (write_out == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
