#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printer - this struct is used for all functions
 * @symbol: the symbol that is found in the string
 * @func: the function to be used
 */
typedef struct printer
{
	char *symbol;
	int (*func)(va_list);
} print;

int _printf(const char *format, ...);
int comp(const char *format, print format_list[], va_list al);
int _putchar(char c);
int _putnum(va_list x);
int _putUI(unsigned int x);
int print_chr(va_list x);
int print_str(va_list x);
int print_perc(va_list x);
int print_int(va_list x);
int print_unsigned_int(va_list x);

#endif
