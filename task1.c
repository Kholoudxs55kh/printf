#include "main.h"
/**
 * write_ch - prints char
 * @c: char
 * Return: write
 */
int write_ch(char c)
{
	return (write(1, &c, 1));
}
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
<<<<<<< HEAD
		len += write_ch('-');
=======
		len += write(1, "-", 1);
>>>>>>> 26ef35a1aea5821237cb27dda2c37831a27e0235
		num = k * -1;
	}
	else
		num = k;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += write_ch('0' + num / div);
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
		len += write_ch('0' + num / div);
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
