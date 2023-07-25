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
