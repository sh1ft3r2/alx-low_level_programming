#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the first argument
 * @argv: the second argument
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int m;
	int cents[] = {25, 10, 5, 2, 1};
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);

	if (m < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && m >= 0; i++)

	/* the 5 stands for the number of elements in cents*/
	{
		while (m >= cents[i])
		{
			m = m - cents[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
