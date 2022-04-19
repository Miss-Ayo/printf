#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: Destination for copying
 * @src: source to copy from
 * @n: the number of bytes to copy
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * rev_string - reverses a string in place
 * @s: string to reverse
 *
 * Return: a pointer to a character
 */
char *rev_string(char *s)
{
	int len, head;
	char tmp, *dest;

	for (len = 0; s[len] != '\0'; len++)
		;
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * base_len - Calculates the length for an octal number
 * @num: the number whose length will be calculated
 * @base: base to be Calculated by
 *
 * Return: an integer representing the length of a number.
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num /= base;
	}
	return (i);
}

/**
 * write_base - Sends characters to be written on std output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
