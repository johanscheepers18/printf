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
int _putnum(va_list);
int _putUI(unsigned int);
int print_chr(va_list x);
int print_str(va_list x);
int print_perc(va_list x);
int print_int(va_list x);
int print_unsigned_int(va_list x);
int print_bin(va_list x);
int print_oct(va_list x);
int print_hex(va_list x);
int print_HEX(va_list x);
int print_custom_str(va_list x);
int print_pointer(va_list x);

unsigned int len(unsigned int x, int y);
char *str_rev(char *x);
void _putbase(char *x);
char *memory_copy(char *a, char *b, unsigned int x);
int check_hex(int x, char y);
int print_custom_hex(unsigned int z);
int print_custom_HEX(unsigned int x);

#endif
