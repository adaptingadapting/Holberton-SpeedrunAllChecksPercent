#include "main.h"

/**
 * get_function - gets a function from a string
 * @string: sring
 * Return: function
 */

int (*get_function(char *string))(va_list ap)
{
	fmt_funcs functions[] = {
		{"c", _pchar},
		{"s", _pstring},
		{"%", _ppercentage},
		{NULL, NULL}
	};
	int i;

	for (i = 0; functions[i].format; i++)
	{
		if (!strcmp(functions[i].format, string))
			return (functions[i].f);
	}
	return (NULL);
}
