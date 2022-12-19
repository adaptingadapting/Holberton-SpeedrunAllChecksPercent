#include "main.h"

/**
 * print_triangle - main
 * @n: number
 */

void print_triangle(int n)
{
	int i;
	int j;
	int l;

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			_putchar(' ');
		}
		for (l = 0; l <= i; l++)
		{
			_putchar('#');	
		}
		_putchar(10);
	}
}
