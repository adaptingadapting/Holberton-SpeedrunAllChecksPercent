#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns int
 */

int main(int argc, char *argv[])
{
	int i = 0;
	char *number;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = argv[1];
	n = atoi(number);
	for (; n != 0;)
	{
		if ( n >= 25)
		{
			n -= 25;
			i++;
			continue;
		}
		if (n >= 10)
		{
			n -= 10;
			i++;
			continue;
		}
		if (n >= 5)
		{
			n -= 5;
			i++;
			continue;
		}
		if (n >= 2)
		{
			n -= 2;
			i++;
			continue;
		}
		if (n >= 1)
		{
			n -= 1;
			i++;
			continue;
		}	    
	}
	printf("%d\n", i);
	return (i);
}
