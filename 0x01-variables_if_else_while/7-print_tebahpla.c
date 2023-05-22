#include <stdio.h>
/**
 * main - Entry point
 * int main(void) -  a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char m = 'a';

	while (m >= 'a')
	{
		putchar(m);
		m--;
	}

	putchar('\n');
	return (0);
}

