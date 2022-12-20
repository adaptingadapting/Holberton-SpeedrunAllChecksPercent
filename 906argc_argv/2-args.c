#include "main.h"

/**
 * main - main
 * @argc: arg count
 * @argv: argument vector
 * Return: alwasys 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	char *string;

	for (i = 0; i < argc; i++)
	{
		string = argv[i];
		for (j = 0; string[j]; j++)
		{
			_putchar(string[j]);
		}
		_putchar(10);
	}
	return (0);
}
