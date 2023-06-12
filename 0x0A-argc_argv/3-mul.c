#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the first argument
 * @argv: the second argument
 * Return: 0 on success
 *
 */

int main(int argc, char *argv[])
{
	int m;
	int n;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		result = m * n;
	}

	printf("%d\n", result);
	return (0);
}
