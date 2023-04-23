#include "main.h"

/**
 * _switch - amplimition to printf
 * @s: arg 1.
 * @args: arg 2.
 * @len: arg 3.
 */
void _switch(char s, va_list args, int *len)
{
	char	a;

	if (!s)
		exit(-1);
	switch (s)
	{
		case 'c':
			a = va_arg(args, int);
			*len += write(1, &a, 1);
			break;
		case 's':
			*len = print(va_arg(args, char *));
			break;
		case '%':
			*len += write(1, "%", 1);
			break;
	}
}

/**
 * _printf - amplimition to printf
 * @format: string
 * Return: whatever
 */
int _printf(const char *format, ...)
{
	int x;
	int	len;
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
			x++;
			_switch(format[x], args, &len);
		}
		else
			len += write(1, format + x, 1);
		x++;
	}
	va_end(args);
	return (len);
}
