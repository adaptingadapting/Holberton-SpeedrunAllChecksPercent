#include "main.h"
#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	char *error = "Error\n";

	if (argc != 3)
	{
		for (i = 0; error[i]; i++)
			_putchar(error[i]);
		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (_atoi(argv[1]) * _atoi(argv[2]));
}
