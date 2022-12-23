#include "main.h"

/**
 * _itoa - turns a number into a string
 * @n: number to be transformed
 * Return: the chars printed
 */

int _itoa(long int n, int base)
{
	int res = 0;
	long int digit;
	long int j = n;
	int elevation = 1;

	for (; j; j /= base)
		elevation *= base;
	for (elevation /= base; elevation > 0; elevation /= base)
	{
		digit = ((n % (base * elevation)) / elevation);
		putchar(digit + '0');
		res++;
	}
	if (!n)
	{
		putchar('0');
		res++;
	}
	return (res);
}
