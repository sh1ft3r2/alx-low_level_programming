#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char tmp;

	while (s[length] != '\0')
	{
		length++;
	}


	for (i = length - 1; i >= length / 2; i--)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;

	}
}
