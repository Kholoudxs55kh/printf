#include "main.h"

/**
 * _printf - amplimition to printf
 * @format: string
 * Return: whatever
 */
int _printf(const char *format, ...)
{
	int 	x;
	char	str[1024];
	int		i;
	va_list args;

	va_start(args, format);
	x = 0;
	i = 0;
	while (format[x])
	{
		if (format[x] == '%')
		{
			x++;
			switch (format[x])
			{
				case 'c':
					str[i] = va_arg(args, int);
					i++;
					break;
				case 's':
					print_str(va_arg(args, char *), str, &i);
					break;
				case '%':
					str[i] = '%';
					i++;
			}
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
	return (print(str));
}

int main()
{
	printf("%d\n", _printf("ttt%s%%\n", "rachid"));
	printf("%d\n", printf("ttt%s%%\n", "rachid"));
	return (0);
}
