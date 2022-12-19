#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main
 * @n: number
 */

void print_to_98(int n)
{
	if (n <= 98)
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	else if (n > 98)
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	putchar(10);
}
