#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct fmt_functions - stores functions
 * @format: formats to compare
 * @f: function to execute format
 */

typedef struct fmt_functions {
	char format;
	int (*f)(va_list ap);
}fmt_funcs;

int _printf(const char *const fmt, ...);
int (*get_function(char c))(va_list ap);
int _pnumber(va_list ap);
int _pstring(va_list ap);
int _pchar(va_list ap);
int _ppercentage(va_list ap __attribute__ ((unused)));

#endif
