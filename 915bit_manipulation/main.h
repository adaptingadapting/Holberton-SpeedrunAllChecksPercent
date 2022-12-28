#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
unsigned int elevator(int n, int base, int elevator);
void print_binary(unsigned long int n);

#endif
