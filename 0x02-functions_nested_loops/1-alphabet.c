#include "main.h"

/**
 * print_alphabet - Entry point
  void print_alphabet(void) - a function that prints the
 * alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		_putchar(m);
		m++;
	}
		_putchar('\n');

}
