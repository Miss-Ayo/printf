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
int parser(const char *format, conver_t func_list[], va_list arg_list)
{
	int i, j, val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; func_list[j].fm != NULL; j++)
				if (format[i + 1] == func_list[j].fm[0])
				{
					val = func_list[j].func(arg_list);
					if (val == -1)
						return (-1);
					printed_chars += val;
					break;
				}
		}
		if (func_list[j].fm == NULL && format[i + 1] != ' ')
		{
			if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				printed_chars = printed_chars + 2;
			}
			else
				return (-1);
		}
		i += 1; /*Updating i to skip format symbols*/
	}
	else
	{
		_putchar(format[i]); /*Call the putchar function*/
		printed_chars++;
	}

	return (printed_chars);
}
