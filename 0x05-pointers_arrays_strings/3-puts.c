#include "main.h"

/**
 *_puts -  a function that prints a string
 *@str: the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
