#include "main.h"

/**
 * _print_rev_recursion
 * @str: string
 */

void _print_rev_recursion(char *str)
{
	int i = 0;
	
	if (str[i])
	{
		_print_rev_recursion(str + 1);
		_putchar(str[0]);
	}
	return;
}
