#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number
 */

void print_times_table(int n)
{
	int i;
	int j;
	int ntoprint;

	if (n <= 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			ntoprint = (i * j);
			if (ntoprint >= 100)
				_putchar((ntoprint / 100) + '0');
			if (ntoprint >= 10)
				_putchar(((ntoprint % 100) / 10) + '0');
			_putchar((ntoprint % 10) + '0');
			if (!i || i * j < 10 && i * (j + 1) < 10)
				_putchar(' ');
			if (!i || i * j < 100 && i * (j + 1) < 100)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar(10);
	}
}
