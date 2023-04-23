#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;


	len = _printf("%s %c %%\n", NULL);
	len2 = printf("%s %c %%\n", NULL);
	printf("len %d\n", len);
	printf("len2 %d\n", len2);
	return 0;
}
