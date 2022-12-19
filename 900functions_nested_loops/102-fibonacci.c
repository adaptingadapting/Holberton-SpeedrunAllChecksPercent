#include "main.h"
#include <stdio.h>

/**
 * main - void
 * Return: fibonacci
 */

int main()
{
	int i;
	long int oldfibo = 0;
	long int newfibo = 1;
	long int fibo;

	for (i = 0; i <= 48; i++)
	{
		fibo = oldfibo + newfibo;
		printf("%ld", fibo);
		if (i < 48)
			printf(", ");
		oldfibo = newfibo;
		newfibo = fibo;
	}
	putchar(10);
}
