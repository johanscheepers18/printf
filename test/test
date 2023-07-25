#include "main.h"

/**
 * print_bin - prints a number in binary form
 * @c: number to be used
 * Returns: the length of the number
 */
int print_bin(va_list c)
{
	int x, y;
	unsigned int i;
	char *a, *b;

	i = va_arg(c, unsigned int);
	if (i == 0)
	{
		return (_putchar('0'));
	}
	if (i < 1)
	{
		return (-1);
	}
	x = len(i, 2);
	a = malloc(sizeof(char) * x + 1);
	if (a == NULL)
	{
		return (-1);
	}
	for (y = 0 ; i > 0 ; y++)
	{
		if (i % 2 == 0)
			a[y] = '0';
		else
			a[y] = '1';
		i = i / 2;
	}
	a[y] = '\0';
	b = str_rev(a);
	if (b == NULL)
		return (-1);
	_putbase(b);
	free(a);
	free(b);
	return (x);
}
