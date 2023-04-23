#include "main.h"

/**
 * print_str - print string.
 * @s: arg 1.
 * @str: arg 2.
 * @i: arg 3.
 */
void print_str(char *s, char *str, int *i)
{
	int n;

	n = 0;
	while (s[n])
	{
		str[*i] = s[n];
		*i = *i + 1;
		n++;
	}
}

/**
 * print - print string.
 * @str: string.
 * Return: the length of string.
 */
int	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	return (i);
}
