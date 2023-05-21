#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * int main(void) - Checks whether the number is greater than five or
 * equal to zero or less than six
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;

	if (LD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	}
	else if (LD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LD);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	}
	return (0);
}
