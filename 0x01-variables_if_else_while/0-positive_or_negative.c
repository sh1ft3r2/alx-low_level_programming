#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * int main(void) - Checks whether the number is positive or negative.
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d it is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d it is zero\n", n);
	}
	else
	{
		printf("%d it is negative\n", n);
	}
	return (0);
}
