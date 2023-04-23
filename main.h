#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

int     _printf(const char *format, ...);
void    print_str(char *s, char *str, int *i);
int     print(char *str);
int print_num(va_list args);
int print_unsgined_num(unsigned int k);
int print_int(va_list list);
int unsigned_int(va_list list);

#endif
