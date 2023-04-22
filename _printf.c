#include "main.h"
#include <stdarg.h>
/**
 * _printf - amplimition to printf
 * @format: string
 * Return: whatever
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	vprintf(format, args);

	va_end(args);
}
