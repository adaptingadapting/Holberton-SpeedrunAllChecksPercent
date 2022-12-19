#include "main.h"

/**
 * times_table - void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) >= 10)
				_putchar(((i * j) / 10) +  '0');
			_putchar(((i * j) % 10) +  '0');
			if (j < 9)
				_putchar(',');
			if (((i * j) < 10) && ((i * (j + 1))) < 10)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar(10);
	}
}
