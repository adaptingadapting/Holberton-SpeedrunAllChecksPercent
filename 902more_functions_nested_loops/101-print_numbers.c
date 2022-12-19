#include "main.h"

/**
 * print_number - prints
 * @n: number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		if (n / 100)
		{
			if (n / 1000)
				_putchar (n / 1000 + '0');
			_putchar((n % 1000) / 100 + '0');
		}
		_putchar((n % 100) / 10 + '0');
	}
	_putchar(n % 10 + '0');
}
