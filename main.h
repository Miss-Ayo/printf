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
int print_number(va_list);
int parser(const char *format, conver_t func_list[], va_list arg_list);

/*Function implemented in base_specifier.c */
int print_binary(va_list);
int print_octal(va_list);
int print_hex(va_list list);
int print_heX(va_list list);

/*Functions implemented in str_manipluation.c */
int print_reversed(va_list);
int rot13(va_list);

/* Funcions implemented in the file format.c */
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int unsigned_integer(va_list);

/* Function implemented in the file print_number.c */
int print_unsigned_number(unsigned int);

/* Functions implemented in the file more_functions.c */
char *rev_string(char *);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int base_len(unsigned int, int);
void write_base(char *str);

#endif
