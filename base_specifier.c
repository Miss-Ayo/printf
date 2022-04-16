#include "main.h"
#include <stdio.h>

int hex_check(int, char);

/**
 * print_binary - Converts a number from base 10 to binary
 * @list: list of arguments passed to this function
 *
 * Return: the length of the number printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num /= 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);

	return (len);
}

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: list of all the arguments passed to the program
 *
 * Return: number of symbols printed to stdout
 */
int print_octal(va_list list)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num /= 8;
	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	_putchar(rev_str);
	free(octal_rep);
	free(rev_str);

	return (len);
}

/**
 * print_hex - Prints a representation of a decimal number
 * on base 16 lowercase
 * @list: list of the arguments passed to the function
 *
 * Return: number of characters printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int len, rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num /= 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	_putchar(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * print_heX - Prints a number on base 16 uppercase
 * @list: list of the arguments
 *
 * Return: number of characters printed
 */
int print_heX(va_list list)
{
	unsigned int num;
	int len, rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num /= 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);

	free(hex_rep);
	free(rev_hex);

	return (len);
}

/**
 * hex_check - Checks which hex funtion is calling it
 * @num: number to convert into letter
 * @x: tells which hex function is calling it
 *
 * Return: ASCII value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *heX = "ABCDEF";

	num -= 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (heX[num]);

	return (0);
}
