#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void *_realloc(void *ptr, unsigned int osize, unsigned int nsize);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);

#endif
