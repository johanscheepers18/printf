#include "main.h"

/**
 * len - get the length of an number
 * @x: the of the length to be calculated for
 * @y: base to be calculated
 * Return: returns the length of the number
 */
unsigned int len(unsigned int x, int y)
{
	unsigned int z;

	for (z = 0 ; x > 0 ; z++)
	{
		x = x / y;
	}
	return (z);
}

/**
 * str_rev - reverse a string
 * @x: string to be reversed
 * Return: returns the pointer to a char
 */
char *str_rev(char *x)
{
	int i, j;
	char y, *z;

	for (i = 0; x[i] != '\0'; i++)
	{
		;
	}

	z = malloc(sizeof(char) * i + 1);
	if (z == NULL)
		return (NULL);
	memory_copy(z, x, i);
	for (j = 0 ; j < i ; j++, i--)
	{
		y = z[i - 1];
		z[i - 1] = z[j];
		z[j] = y;
	}
	return (z);
}

/**
 * _putbase - prints a char
 * @x: string to be used
 */
void _putbase(char *x)
{
	int y;

	for (y = 0; x[y] != '\0'; y++)
		_putchar(x[y]);
}

/**
 * memory_copy - copy the memory address
 * @a: destination of the copy
 * @b: source to be copied to a
 * @x: the number of bytes that should be copied from b
 * Return: returns a pointer to a
 */
char *memory_copy(char *a, char *b, unsigned int x)
{
	unsigned int z;

	for (z = 0; z < x; z++)
	{
		a[z] = b[z];
	}
	a[z] = '\0';
	return (a);
}
