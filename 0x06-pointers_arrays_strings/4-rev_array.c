#include "main.h"

/**
 * reverse_array - a function that reverses the
 * content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int m = 0;
	int temp;

	while ((m < n / 2))
	{
		temp = a[m];
		a[m] = a[n - 1];
		a[n - 1] = temp;
		m++;
		n--;
	}
}
