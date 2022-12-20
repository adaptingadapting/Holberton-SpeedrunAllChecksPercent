#include "main.h"

/**
 * main - prints the name of the command
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	char *string = argv[0];

	(void)argc;
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	_putchar(10);
	return (0);
}
  
