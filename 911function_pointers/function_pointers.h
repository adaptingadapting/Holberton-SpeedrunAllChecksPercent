#ifndef main_H
#define main_H

#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int a));
void print_name(char *name, void (*f)(char *s));

#endif
