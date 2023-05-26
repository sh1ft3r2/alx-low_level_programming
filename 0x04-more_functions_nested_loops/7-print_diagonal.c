#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n:  is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}

		for  (m = 0; m < n; m++)
		{
			int x;

			for (x = 0; x < m; x++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}

}
