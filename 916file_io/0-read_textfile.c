#include "main.h"

/**
 * read_textfile - raeds a textfile
 * @filename: name of the file
 * @letters: amount of chars to be read
 * Return: amount of chars read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t retvalue;
	int file;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf  = malloc(letters + 1);
	if (!buf)
		return (0);
	retvalue = read(file, buf, letters);
	if (retvalue == -1)
		return (0);
	buf[letters + 1] = '\0';
	file = write(STDOUT_FILENO, buf, retvalue);
	if (file == -1)
		return (0);
	free(buf);
	return (retvalue);
}
