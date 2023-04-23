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
 * Return: whatever
 */
int Non_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
