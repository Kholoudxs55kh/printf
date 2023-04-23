#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int chartype(char c)
{
	return (write(1, &c, 1));
}

int p_char(va_list args)
{
	chartype(va_arg(args, int));
			return (1);
}

int p_string(va_list args)
{
	int k;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	str = "NULL";

	for (k = 0; str[k] != '\0'; k++)

	chartype(str[k]);
	return (k);
}


/**
 * _printf - amplimition to printf
 * @format: string
 * Return: whatever
 */

int _printf(const char *format, ...)
{
	int len, len2, x;
	char *str;

	va_list args;

	va_start(args, format);

	x = 0;
	while(format[x] != '\0')
	{
		if (format[x] != '%')
		{
			len2 = strlen(format);
		write(1, format, len2);
			x++;
		}

		else if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					write(1, p_char, 1);
					break;
				case 's':
					write(1, p_string, len);
					break;
				case '%':
					write(1, "%", 1);
					break;
				default:
					break;
			}
		}
		va_end(args);
	}
		return (x);
}
