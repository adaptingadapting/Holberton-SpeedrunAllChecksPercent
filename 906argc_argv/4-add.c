#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main functiom
 * @argc: argument count
 * @argv: argument vector
 * Return: returns int
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int res = 0;
	char *string;
	char *error = "Error\n";
	  
	if (argc < 2)
	{
		error:
		if (argc == 1)
		{
			_putchar('0');
			_putchar(10);
		}
		else
			for (i = 0; error[i]; i++)
				_putchar(error[i]);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		string = argv[i];
		for (j = 0; string[j]; j++)
		{
			if (string[j] < '0' || string[j] > '9')
				goto error;
		}
		res += atoi(string);
	}
	printf("%d\n", res);
	return (res);
}
