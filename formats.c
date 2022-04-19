#include "main.h"

/**
 * print_char - Prints character
 * @list: list of arguments
 *
 * Return: the amount of characters printed.
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 *
 * Return: the amount of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 *
 * Return: the amount of characters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 *
 * Return: the amount of characters printed
 */
int print_integer(va_list list)
{
	int len;

	len = print_number(list);
	return (len);
}

/**
 * unsigned_integer - Prints unsigned integer
 * @list: list of arguments
 *
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);

	return (print_unsigned_number(num));
}
