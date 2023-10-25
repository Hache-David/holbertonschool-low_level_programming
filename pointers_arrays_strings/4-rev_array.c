#include "main.h"

/**
 * reverse_array - print an reverse array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		tmp = a[(n - i) - 1];
		a[(n - i) - 1] = a[i];
		a[i] = tmp;
	}
}
