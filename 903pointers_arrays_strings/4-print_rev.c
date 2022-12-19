#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string to be printed
 */

void print_rev(char *str)
{
	int i = _strlen(str);

	for (; i >= 0; i--)
		_putchar(str[i]);
	_putchar(10);
}
