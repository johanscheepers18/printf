#include "main.h"

/**
 * print_custom_hex - print the hexadecimal number
 * @z: the number that should be printed
 * Return: returns the amount
 */
int print_custom_hex(unsigned int z)
{
	int i, *arr, amount = 0;
	unsigned int z1 = z;

	while (z / 16 != 0)
	{
		z /= 16;
		amount++;
	}
	amount++;
	arr = malloc(amount * sizeof(int));

	for (i = 0; i < amount; i++)
	{
		arr[i] = z1 % 16;
		z1 /= 16;
	}

	for (i = amount - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
		{
			arr[i] = arr[i] + 7;
		}
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (amount);
}

/**
 * print_custom_HEX - prints a hexidecimal number
 * @x: list of arguments
 * Return: returns the amount
 */
int print_custom_HEX(unsigned long int x)
{
	long int i, *arr, amount = 0;
	unsigned long int x1 = x;

	while (x / 16 != 0)
	{
		x /= 16;
		amount++;
	}
	amount++;
	arr = malloc(amount * sizeof(long int));

	for (i = 0; i < amount; i++)
	{
		arr[i] = x1 % 16;
		x1 /= 16;
	}

	for (i = amount - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
		{
			arr[i] = arr[i] + 39;
		}
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (amount);
}

/**
 * print_custom_str - print custom strings
 * @x: list of arguments
 * Return: returns the length of the string
 */
int print_custom_str(va_list x)
{
	int w, y = 0, z;
	char *str;

	str = va_arg(x, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (w = 0; str[w] != '\0' ; w++)
	{
		if (str[w] < 32 || str[w] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			y = y + 2;
			z = str[w];
			if (z < 16)
			{
				_putchar('0');
				y++;
			}
			y = y + print_custom_hex(z);
		}
		else
		{
			_putchar(str[w]);
			y++;
		}
	}
	return (y);
}

/**
 * print_pointer - prints a pointer
 * @x: list of all the arguments
 * Return: returns b
 */
int print_pointer(va_list a)
{
	void *pointer;
	int x, y;
	long int z;
	char *str = "(nil)";

	pointer = va_arg(a, void*);
	if (pointer == NULL)
	{
		for (x = 0; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
		return (x);
	}

	z = (unsigned long int)pointer;
	_putchar('0');
	_putchar('x');
	y = print_custom_HEX(z);
	return (y + 2);
}
