#include <stdio.h>
/**
 * main - Entry point
 * int main(void) - a program that prints the alphabet
 * in lowercase apart from q and e, followed by a new line.
 * Return: 0
*/

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		if (m != 'q' && m != 'e')
		{
			putchar(m);
		}
			m++;
	}
	putchar('\n');
	return (0);

}
