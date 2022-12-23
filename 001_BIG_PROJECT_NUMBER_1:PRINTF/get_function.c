#include "main.h"

/**
 * get_function - gets a function from a string
 * @string: sring
 * Return: function
 */

int (*get_function(char format))(va_list ap)
{
	fmt_funcs functions[] = {
		{'c', _pchar},
		{'s', _pstring},
		{'%', _ppercentage},
		{'\0', NULL}
	};
	int i;

	for (i = 0; functions[i].format; i++)
	{
		if (functions[i].format == format)
			return (functions[i].f);
	}
	return (NULL);
}
