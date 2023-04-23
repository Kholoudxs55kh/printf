#include "main.h"

/**
 * _switch - amplimition to printf
 * @s: arg 1.
 * @args: arg 2.
 * @len: arg 3.
 * Return: ....
 */
int _switch(char s, va_list args, int *len)
{
	char	a;

	if (!s)
		return (2);
	switch (s)
	{
		case 'c':
			a = va_arg(args, int);
			*len += write(1, &a, 1);
			break;
		case 's':
			*len += printstr(va_arg(args, char *));
			break;
		case '%':
			*len += write(1, "%", 1);
			break;
		case 'd': case 'i':
			print_num(va_arg(args, int), 10, 1, 0, len);
			break;
		case 'b':
			print_num(va_arg(args, int), 2, 0, 0, len);
			break;
		case 'u':
			print_num(va_arg(args, int), 10, 0, 0, len);
			break;
		case 'o':
			print_num(va_arg(args, int), 8, 0, 0, len);
			break;
		case 'x':
			print_num(va_arg(args, int), 15, 0, 0, len);
			break;
		case 'X':
			print_num(va_arg(args, int), 15, 0, 1, len);
			break;
		default:
			return (1);
	}
	return (0);
}

/**
 * _printf - amplimition to printf
 * @format: string
 * Return: whatever
 */
int _printf(const char *format, ...)
{
	int x, len, m;
	va_list args;

	va_start(args, format);
	x = 0;
	len = 0;
	if (format == NULL)
		return (-1);
	while (format[x])
	{
		if (format[x] == '%')
		{
			m = _switch(format[x + 1], args, &len);
			if (m == 2)
				return (-1);
			else if (m == 1)
				len += write(1, format + x, 1);
			else
				x++;
		}
		else
			len += write(1, format + x, 1);
		x++;
	}
	va_end(args);
	return (len);
}
