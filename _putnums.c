#include "main.h"

/**
 * _putnum - prints a number
 * @x: list of all arguments
 * Return: returns the number
 */
int _putnum(va_list x)
{
	int i, j, k;
	unsigned int y;

	i = va_arg(x, int);
	j = 1;
	k = 0;

	if (i < 0)
	{
		k += _putchar('-');
		y = i * -1;
	}

	else
	{
		y = i;
	}

	for (; y / j > 9 ; )
	{
		j *= 10;
	}

	for (; j != 0 ; )
	{
		k += _putchar('0' + y / j);
		y %= j;
		j /= 10;
	}

	return (k);
}

/**
 * _putUI - prints an unsigned int
 * @x: unsigned int
 * Return: returns amount of numbers printed
 */
int _putUI(unsigned int x)
{
	int i = 1, j = 0;
	unsigned int y = x;

	for (; y / i > 9 ; )
	{
		i *= 10;
	}

	for (; i != 0 ; )
	{
		j += _putchar('0' + y / i);
		y %= i;
		i /= 10;
	}

	return (j);
}

