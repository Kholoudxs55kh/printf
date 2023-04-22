#include "main.h"
#include <stdarg.h>
/**
 * _printf - amplimition to printf
 * @format: string
 * Return: whatever
 */

int _printf(const char *format, ...)
{
	int x;

	va_list args;

	va_start(args, format);

		x = 0;
		while ((format != NULL) && (format[x] != '\0') && (format[x] == '%'))
		{
			switch (format[x + 1])
			{
			case 'c':
				write(1, format, 1);
					break;
			}
			x++;
		}
		return (0);
}
