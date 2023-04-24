#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>


int _printf(const char *format, ...);
int	printstr(char *str);
void print_num(int n, int base, int signedd, int capital, int *len);
void print_ptr(unsigned long nb, int *len);
int Non_printable(char c);
int rot13(char *k);
void print_rev(char *s);

#endif
