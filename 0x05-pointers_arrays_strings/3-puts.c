#include "main.h"

/**
 *_puts -  a function that prints a string
 *@str: the string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
