#include "main.h"

/**
 * append_text_to_file - appends to the end of the file
 * @filename: name of the file
 * @text_content: text content to append
 * Return: 1 on succes, -1 on failures
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
