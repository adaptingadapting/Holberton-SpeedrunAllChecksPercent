#ifndef main_H
#define main_H

#include <stddef.h>

void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *str, char *str2);
unsigned int _strspn(char *str, char *accept);
char *_strchr(char *str, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *rot13(char *str);
char *leet(char *str);
char *cap_string(char *str);
char *string_toupper(char *str);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int _atoi(char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *str);
void print_rev(char *str);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *str);
void swap_int(int *a, int *b);
void reset_to_98(int *n);

#endif
