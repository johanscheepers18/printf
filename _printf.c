#include "main.h"

/**
 * _putchar - gets a character that should be printed
 * @c: char that should be printed
 * Return: returns the write function, that prints c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * comp - gets the string and its required formats
 * @format: format to be used
 * @format_list: list of all available functions
 * @al: list of all arguments
 * Return: Returns the length of the string
 */
int comp(const char *format, print format_list[], va_list al)
{
	int x, y, z, len = 0;

	for (x = 0 ; format[x] != '\0' ; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0 ; format_list[y].symbol != NULL ; y++)
			{
				if (format[x + 1] == format_list[y].symbol[0])
				{
					z = format_list[y].func(al);
					if (z == -1)
						return (-1);
					len += z;
					break;
				}
			}
			if (format_list[y].symbol == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
					_putchar(format[x]);
					_putchar(format[x + 1]);
					len = len + 2;
				else
				{
					return (-1);
				}
			}
			x = x + 1;
		}
		else
		{
			_putchar(format[x]);
			len++;
		}
	}
	return (len);
}

/**
 * _printf - gets a string that should be printed
 * @format: the format that should be used in the string
 * Return: returns the length of the string
 */
int _printf(const char *format, ...)
{
	int strlen;
	print format_list[] = {
		{"c", print_chr},
		{"s", print_str},
		{"%", print_perc},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned_int},
		{NULL, NULL}
	};

	va_list al;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(al, format);
	strlen = comp(format, format_list, al);
	va_end(al);
	return (strlen);
}
