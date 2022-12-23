#include "main.h"

/**
 * _pchar - prints a char to the screen
 * @ap: list of var args, its going to be c though
 * Return: 1 (because we printed 1 char)
 */

int _pchar(va_list ap)
{
	putchar(va_arg(ap, int));
	return (1);
}

/**
 * _pstring - prints a string to the screen
 * @ap: argument list, its going to be a string
 * Return: number or characters printed
 */

int _pstring(va_list ap)
{
	int i;
	char *string = va_arg(ap, char*);

	if (!string)
		return (0);
	for (i = 0; string[i]; i++)
		putchar(string[i]);
	return (i);
}

/**
 * _ppercentage - prints a percentage sign to stdout
 * @ap: ap list, not used
 * Return: 1 for the one char printed
 */

int _ppercentage(va_list ap __attribute__ ((unused)))
{
	putchar('%');
	return (1);
}

/**
 * _pnumber - prints a number to the stdout
 * @ap: list of arguments, its an int in this case
 * Return: returns the chars printed
 */

int _pnumber(va_list ap)
{
	long int i = va_arg(ap, int);
	
	return (_itoa(i, 10));
}
