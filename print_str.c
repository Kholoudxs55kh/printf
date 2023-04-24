#include "main.h"

/**
 * printstr - print string.
 * @str: string.
 * Return: the length of string.
 */
int	printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	return (i);
}
/**
 * Non_printable - print non printable chars
 * @c: the char
 */
void Non_printable(char *c, int *len)
{
	int	i = 0;

	if (!c)
		c = "(null)";
	while (c[i])
	{
		if (c[i] >= 32 && c[i] < 127)
			*len += write(1, c + i, 1);
		else
		{
			*len += write(1, "\\x", 2);
			print_num(c[i], 10, 1, 0, len);
		}
		i++;
	}
}
/**
 * rot13 - encodes the string into rot13 code
 * @k: the string
 * Return: string in rot13code
 */
char *rot13(char *k)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int h = 0, m = 0;
	char t[] = "(null)";

	if (!k)
		k = t;
	while (k[h] != '\0')
	{
		for (m = 0; m < 54; m++)
		{
			if (k[h] == a[m])
			{
				k[h] = rot13[m];
				break;
			}
		}
		h++;
	}
	return (k);
}
/**
 * print_rev -prints a string reversed
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int k = 0;

	while (k >= 0)
	{
		if (s[k] == '\0')
			break;
		k++;
	}
	for (k--; k >= 0; k--)
		write(1, s + k, 1);
	write(1, "\n", 1);
}
