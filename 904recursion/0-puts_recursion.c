#include "main.h"

/**
 * _puts_recursion - puts a string and newline
 * @str: string to be printed
 */

void _puts_recursion(char *str)
{
	int i = 0;

	if (str[i])
	{
		_putchar(str[i]);
		_puts_recursion(str + 1);
	}
	else
		_putchar(10);
	return;
}
