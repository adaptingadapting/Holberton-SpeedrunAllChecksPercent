#include "main.h"

/**
 * print_diagonal - void
 * @n: number
 */

void print_diagonal(int n)
{
	int i;
	int j;
	int loops = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; loops >= j; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar(10);
		loops++;
	}
	_putchar(10);
}
