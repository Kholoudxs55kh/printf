#include "main.h"
#include <stdarg.h>


int _printf(const char *format, ...)
{
    va_list args;
    va_start (args, format);
    vprintf(format, args);
    va_end(args);
}
