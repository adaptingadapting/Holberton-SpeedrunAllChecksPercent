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
	long int sum = 0;

	for (i = 0; i <= 48; i++)
	{
		fibo = oldfibo + newfibo;
		if (!(fibo % 2) && fibo < 4000000)
			sum += fibo;
		oldfibo = newfibo;
		newfibo = fibo;
	}
	printf("%ld", sum);
	putchar(10);
}
