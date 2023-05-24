#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char m;
	int i;

	for (i = 0; i <= 10; i++)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
				m++;
		}

	}

	_putchar('\n');
}
