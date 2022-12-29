#include "main.h"

/**
 * main - main function, copies
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 1 on succes
 */

int main(int argc, char *argv[])
{
	int fd;
	int fd2;
	int wr;
	int rr;
	char buf[1024] = {0};

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rr = read(fd, buf, 1024)) > 0)
	{
		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}
	}
	if (rr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); 
	}
	rr = close(fd);
	if (rr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	wr = close(fd2);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);	    
	}
	return (0);
}
