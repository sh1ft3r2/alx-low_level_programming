#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: first argument
 * @argv: second argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m, n;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n]; n++)
		{
			if (argv[m][n] < '0' || argv[m][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[m]);
	}
	printf("%d\n", result);
	return (0);
}
