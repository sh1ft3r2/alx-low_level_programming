#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @string: the string
 * Return: string
 */

char *string_toupper(char *string)
{
	int m = 0;

	while (string[m] != '\0')
	{

		if (string[m] >= 'a' && string[m] <= 'z')
		{
			string[m] = string[m] - 32;
		}

		m++;
	}
	return (string);
}
