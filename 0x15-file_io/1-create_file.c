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
	mode_t permission;

	permission = S_IRUSR | S_IWUSR;
	if (text_content == NULL)
		file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permission);
	else
	{
		text_size = strlen(text_content);
	}
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_out = write(file_descriptor, text_content, text_size);
		if (write_out == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
