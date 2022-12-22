#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - prints numbers
 * @s: printed between lines
 * @n: number of pararmeters
 */

void print_numbers(const char *s, const unsigned int n, ...)
{
	int i;
	int j;
	char *aux = malloc(sizeof(s));
	va_list ap;

	if (!s)
		aux = "";
	else
		strcpy(aux, s);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		printf("%d%s", j, aux);
	}
	free(aux);
	printf("\n");
}
