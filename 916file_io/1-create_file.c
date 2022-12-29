#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the new file
 * @text_content: content of the new file
 * Return: 1 on succces
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int rr;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		if ((fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600)) == -1)
		return (-1);
		close(fd);
		return (1);
	}
	if ((fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600)) == -1)
		return (-1);
	if ((wr = write(fd, text_content, strlen(text_content) + 1)) == -1)
		return (-1);
	close(fd);
	return (1);
}
