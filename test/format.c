#include "main.h"

/**
 * print_chr - prints a charcter
 * @x: list of all arguments
 * Return: return amount of chars printed
 */
int print_chr(va_list x)
{
	_putchar(va_arg(x, int));
	return (1);
}

/**
 * print_str - prints a string
 * @x: list of all arguments
 * Return: returns amount of chars printed
 */
int print_str(va_list x)
{
	unsigned int y;
	char *z;

	z = va_arg(x, char *);
	if (z == NULL)
	{
		z = "(null)";
	}
	for (y = 0 ; z[y] != '\0' ; y++)
	{
		_putchar(z[y]);
	}
	return (y);
}

/**
 * print_perc - prints %
 * @x: list of all arguments
 * Return: returns amount of chars printed
 */
int print_perc(__attribute__((unused))va_list x)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - prints an int
 * @x: list of all arguments
 * Return: returns amount of chars printed
 */
int print_int(va_list x)
{
	int y;

	y = _putnum(x);
	return (y);
}

/**
 * print_unsigned_int - prints an unsigned int
 * @x: list of all arguments
 * Return: returns amount of char printed
 */
int print_unsigned_int(va_list x)
{
	unsigned int y;

	y = va_arg(x, unsigned int);

	if (y == 0)
	{
		return (_putUI(y));
	}

	if (y < 1)
	{
		return (-1);
	}

	return (_putUI(y));
}
