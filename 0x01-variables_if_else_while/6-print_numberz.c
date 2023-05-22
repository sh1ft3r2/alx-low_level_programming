#include <stdio.h>

/**
 * main - Entry point
 * int main(void) - a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int num = 0;


	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
