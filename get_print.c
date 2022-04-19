#include "main.h"

/**
 * parser - Receives the main string and all the necessary parameters
 * to print a formated string.
 * @format: a string containing all the desired characters.
 * @func_list: a list of all the possible functions
 * @arg_list: a list containing all the arguments passed to the program
 *
 * Return: a count of the characters printed.
 */
int get_print(const char *format, conver_t func_list[], va_list arg_list)
{
	int i, j;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		for (j = 0; func_list[j].fm; j++)
		{
			if (*func_list[j].fm == format[i + 1])
			{
				count += func_list[j].func(arg_list);
				break;
			}
		}
		i++;
		if (!func_list[j].fm)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
	}
	return (count);
}
