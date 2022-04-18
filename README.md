# printf
This project is in order to recode the printf function and some of its options.

## Description
* *_printf* function produces output according to a format which is described below.
* write its output to the stdout, the std output stream.
* return the number of characters printed (excluding the null byte used to end output to strings).

## Avaible conversion specifiers:
+ %c: prints a single character
+ %s: string 
+ %d: integer
+ %i: integer
+ %b: binary representation of an unsigned decimal
+ %u: unsigned integer
+ %x: hexadecimal representation of an unsigned decimal in lowercase letters
+ %X: hexadecimal representation of an unsigned decimal in uppercase letters
+ %r: reversed string
+ %R: The Rot13 interpretation of an string.

## Usage
* All the files will be compiled on Ubuntu 20.4 LTS using **gcc**
* The code will be compiled using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**

## Example

```
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n"); /*Print: Let's tyr to printf a simple sentence.*/

	_printf("Length: %d, %i\n", len, len); /*Print: Length: 39, 39*/

	_printf("Percent: [%%]\n"); /*Print: Percent: [%]*/

	_printf("%s\n", "I am a string!"); /*Print: I am a string!*/

	return (0);
}

```
