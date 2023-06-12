#include <stdio.h>

/**
 * main - entry point
 * @argc: the first argument
 * @argv: the second argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	i = argc;

	(void)argv;

	printf("%d\n", i -1);

	return (0);
}
