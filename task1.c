#include "main.h"
/**
 * print_num - prints a number
 * @args: args
 * Return: len
 */
int print_num(va_list args)
{
	int k, div, len;
	unsigned int num;

	k = va_arg(args, int);
	div = 1;
	len = 0;

	if (k < 0)
	{
		len += write(1, '-', 4);
		num = k * -1;
	}
	else
		num = k;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += write(1, '0' + num / div, 4);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * print_unsgined_num - Prints an unsigned number
 * @k: unsigned integer
 * Return: len
 */
int print_unsgined_num(unsigned int k)
{
	int div, len;
	unsigned int num;

	div = 1;
	len = 0;

	num = k;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += write(1, '0' + num / div, 8);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_int - prints integer
 * @list: arg
 * Return: len
 */
int print_int(va_list list)
{
	int len;

	len = print_num(list);
	return (len);
}
/**
 * unsigned_int - prints unsigned integers
 * @list: args
 * Return: -1 or func
 */
int unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_num(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_num(num));
}
