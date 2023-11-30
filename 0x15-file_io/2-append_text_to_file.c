#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to be added at the end
 * Return: 1 upon sucess, -1 upon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_out;
	int i;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		write_out = write(file_descriptor, text_content, i);
		if (write_out == -1)
			return (-1);
	}
	close(file_descriptor);
	return  (1);
}
