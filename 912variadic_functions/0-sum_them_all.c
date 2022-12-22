#include "variadic_functions.h"

/**
 * sum_them_all - sums numbers
 * @n: number
 * Return: returns the sum of its parameters
 */

int sum_them_all(unsigned int n, ...)
{
	va_list ap;
	unsigned int result = 0;
	int i;

	if (!n)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		result += va_arg(ap, unsigned int);
	va_end(ap);
	return (result);
}
