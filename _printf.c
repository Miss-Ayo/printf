#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: string argument
 * @...: variable arguments
 *
 * Description: _printf takes a formating string @format
 * and couple of optional variables @... as input and outputs
 * strings to console while converting input variables to strings.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int arg = 0;
	conver_t func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	/*if (format == NULL)*/
		/*return (-1);*/

	va_start(arg_list, format);

	arg = get_print(format, func_list, arg_list);

	va_end(arg_list);

	return (arg);
}
