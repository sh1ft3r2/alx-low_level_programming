#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		if (num % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", num);
		}
	}

	printf("\n");
	return (0);
}
