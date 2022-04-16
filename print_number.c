#include "main.h"

/**
 * print_number - Prints a number
 * @args: list of arguments
 *
 * Return: the number of args printed
 */
int print_number(va_list args)
{
	int n, div, len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_unsigned_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 *
 * Return: the amount of number printed
 */
int print_unsigned_number(unsigned int n)
{
	int div, len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;
	for (; num / div > 9; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
