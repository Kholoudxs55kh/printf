#include "main.h"

/**
 * _switch - amplimition to printf
 * @s: arg 1.
 * @str: arg 2.
 * @args: arg 3.
 * @i: arg 4.
 * Return: ....
 */
int _switch(char s, char *str, va_list args, int *i, int *n)
{
	if (!s)
		return (2);
	switch (s)
	{
		case 'c':
			str[*i] = va_arg(args, int);
			if (str[*i])
				*i = *i + 1;
			else
				*n = 0;
			break;
		case 's':
			print_str(va_arg(args, char *), str, i);
			break;
		case '%':
			str[*i] = '%';
			*i = *i + 1;
			break;
		case 'd':
			print_int(args);
			break;
		case 'i':
			print_int(args);
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
	int x, i, m, n;
	char str[1024];
	va_list args;

	va_start(args, format);
	x = 0;
	i = 0;
	n = 0;
	if (format == NULL)
		return (-1);
	while (format[x])
	{
		if (format[x] == '%')
		{
			m = _switch(format[x + 1], str, args, &i, &n);
			if (m == 2)
				return (-1);
			else if (m == 1)
			{
				str[i] = format[x];
				i++;
			}
			else
				x++;
		}
		else
		{
			str[i] = format[x];
			i++;
		}
		x++;
	}
	str[i] = '\0';
	va_end(args);
	return (print(str) + n);
}
