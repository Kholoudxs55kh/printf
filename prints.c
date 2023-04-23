#include "main.h"
#include <unistd.h>
#include <string.h>

int _write_char(char c)
{
	return (write(1, &c, 1));
}

int pr_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

int pr_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

int pr_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

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
                                        write(1, pr_char((char)va_list list), 1);
                                        break;
                                case 's':
					len = strlen(pr_string);
                                        write(1, pr_string, len);
                                        break;
                                case '%':
                                        write(1,pr_percent, 1);
                                        break;
                                default:
                                        break;
                        }
                }
                va_end(args);
        }
                return (x);
}
