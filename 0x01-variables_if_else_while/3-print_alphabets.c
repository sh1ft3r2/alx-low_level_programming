#include <stdio.h>
/**
 * main - Entry point
 * int main(void) - a program that prints the alphabet in lowercase,
 * and then in uppercase
 * Return: 0
 */

int main(void)
{
	char m = 'a';
	char n = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
