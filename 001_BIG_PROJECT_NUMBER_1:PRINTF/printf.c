#include "main.h"

/**
 * _printf - formated printing
 * @fmt: format
 * Return: characrers printed
 */

int _printf(const char *const fmt, ...)
{
	int i;
	int (*f)(va_list ap);
	va_list ap;
	int rvalue = 0;

	va_start(ap, fmt);
	for (i = 0; fmt && fmt[i]; i++)
	{
		if (fmt[i] == '%')
		{
			if (fmt[i + 1])
			{
				f = get_function(fmt[i + 1]);
				if (f)
				{
					rvalue += f(ap);
					i++;
				}
				else
				{
					rvalue++;
					putchar('%');
				}
			}
			else
				return (-1);
		}
		else
		{
			rvalue ++;
			putchar(fmt[i]);
		}
	}
	va_end(ap);
	return (rvalue);
}
