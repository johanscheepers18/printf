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

int print_oct(va_list x)
{
	int i;
	unsigned int y;
	char *a, *b;

	y = va_arg(x, unsigned int);

	if (y == 0)
	{
		return (_putchar('0'));
	}
	if (y < 1)
	{
		return (-1);
	}

	i = len(y, 8);

	a = malloc(sizeof(char) * y + 1);
	if (a == NULL)
	{
		return (-1);
	}
	for (i = 0; y > 0; i++)
	{
		a[i] = (y % 8) + 48;
		y = y / 8;
	}
	a[i] = '\0';
	b = str_rev(a);
	if (b == NULL)
	{
		return (-1);
	}
	_putbase(b);
	free(a);
	free(b);
	return (i);
}

int print_hex(va_list x)
{
	int i, j;
	unsigned int k;
	char *a, *b;

	k = va_arg(x, unsigned int);

	if (k == 0)
		return (_putchar('0'));
	if (k < 1)
		return (-1);
	i = len(k, 16);
	a = malloc(sizeof(char) * k + 1);
	if (a == NULL)
		return (-1);
	for (i = 0; k > 0; i++)
	{
		j = k % 16;
		if (j > 9)
		{
			j = check_hex(j, 'x');
			a[i] = j;
		}
		else
			a[i] = j + 48;
		k = k / 16;
	}
	a[i] = '\0';
	b = str_rev(a);
	if (b == NULL)
		return (-1);
	_putbase(b);
	free(a);
	free(b);
	return (i);
}

int print_HEX(va_list x)
{
	int i, j;
	unsigned int k;
	char *a, *b;

	k = va_arg(x, unsigned int);

	if (k == 0)
		return (_putchar('0'));
	if (k < 1)
		return (-1);
	i = len(k, 16);
	a = malloc(sizeof(char) * k + 1);
	if (a == NULL)
		return (-1);
	for (i = 0; k > 0; i++)
	{
		j = k % 16;
		if (j > 9)
		{
			j = check_hex(j, 'X');
			a[i] = j;
		}
		else
			a[i] = j + 48;
		k = k / 16;
	}
	a[i] = '\0';
	b = str_rev(a);
	if (b == NULL)
		return (-1);
	_putbase(b);
	free(a);
	free(b);
	return (i);
}

int check_hex(int x, char y)
{
	char *hex = "abcdef";
	char *HEX = "ABCDEF";

	x = x - 10;
	if (y == 'y')
	{
		return (hex[x]);
	}
	else
	{
		return (HEX[x]);
	}
	return (0);
}
