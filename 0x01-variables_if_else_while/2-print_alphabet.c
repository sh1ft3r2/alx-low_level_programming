#include <stdio.h>
/**
 * main - entry point
 * int main(void) - program that prints the alphabet
 * in lowercase followed by a new line.
 * Return: 0
 */

int main(void)
{
	char m = 'a';

	do {
		putchar(m);
		m++;
	} while (m <= 'z');

		putchar('\n');
	return (0);
}
