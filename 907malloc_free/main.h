#ifndef main_h
#define main_h

#include <stdlib.h>

void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *str1, char *str2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);

#endif
