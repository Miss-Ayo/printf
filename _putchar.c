#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: the character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
