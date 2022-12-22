#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @s: separator to print between strings
 * @n: number of strings to print
 */

void print_strings(const char *s, const unsigned int n, ...)
{
	int i;
	va_list ap;
	char *s2;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s2 = va_arg(ap, char *);
		if (s2)
			printf("%s", s2);
		else
			printf("(nil)");
		if (s && i < n - 1)
			printf("%s", s);
	}
	printf("\n");
}
