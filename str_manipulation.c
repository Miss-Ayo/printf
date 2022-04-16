#include "main.h"

/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg: argument
 *
 * Return: the amount of characters printed
 */
int print_reversed(va_list arg)
{
	int len;
	char *str, *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);

	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);

	return (len);
}

/**
 * rot13 - Converts string to rot13
 * @list: string to convert
 *
 * Return: converted string
 */
int rot13(va_list list)
{
	int i, x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			_putchar(u[x])
				break;
		}
		if (x == 53)
			_putchar(str[i]);
	}
	return (i);
}
