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

#endif
