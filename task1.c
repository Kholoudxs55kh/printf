#include "main.h"

/**
 * print_nums - prints a signed number
 * @nb: arg 1.
 * @str: arg 2.
 * @base: arg 3.
 * @len: arg 4.
 */
void print_nums(long nb, char *str, int base, int *len)
{
	if (nb < 0)
	{
		nb *= -1;
		*len += write(1, "-", 1);
	}
	if (nb < base)
		*len += write(1, str + nb, 1);
	else
	{
		print_nums(nb / base, str, base, len);
		print_nums(nb % base, str, base, len);
	}
}

/**
 * print_numu - prints a unsigned number
 * @nb: arg 1.
 * @str: arg 2.
 * @base: arg 3.
 * @len: arg 4.
 */
void print_numu(unsigned int nb, char *str, int base, int *len)
{
	if (nb < (unsigned int)base)
		*len += write(1, str + nb, 1);
	else
	{
		print_nums(nb / base, str, base, len);
		print_nums(nb % base, str, base, len);
	}
}

/**
 * print_num - prints a number
 * @n: arg 1.
 * @base: arg 2.
 * @signedd: arg 3.
 * @capital: arg 4.
 * @len: arg 5.
 */
void print_num(int n, int base, int signedd, int capital, int *len)
{
	long nbs;
	unsigned int nbu;
	char *str = "0123456789abcdef";

	nbs = n;
	if (capital)
		str = "0123456789ABCDEF";
	nbu = n;
	if (signedd)
		print_nums(nbs, str, base, len);
	else
		print_numu(nbu, str, base, len);
}
