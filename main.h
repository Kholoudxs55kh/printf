#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int	printstr(char *str);
int write_ch(char c);
int print_num(va_list args);
int print_unsgined_num(unsigned int k);
int print_int(va_list list);
int unsigned_int(va_list list);

#endif
