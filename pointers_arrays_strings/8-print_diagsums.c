#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 *
 * @a: pointer.
 * @size: size tab.
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum = sum + a[i];
		a = a + size;
	}
	printf("%d, ", sum);
	sum = 0;
	a = a - size;
	for (i = 0 ; i < size ; i++)
	{
		sum = sum + a[i];
		a = a - size;
	}
	printf("%d\n", sum);
}
