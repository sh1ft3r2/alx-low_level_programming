#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;
	
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	
	return (dest);
}
