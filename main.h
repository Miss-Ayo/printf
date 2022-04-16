#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct convert - Struct for formats and functions.
 * @fm: The format
 * @func: Pointer to function
 */
typedef struct convert
{
	char *fm;
	int (*func)(va_list);
} conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list list);
int print_heX(va_list list);
int parser(const char *format, conver_t func_list[], va_list arg_list);

#endif
