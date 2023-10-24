#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code for
 *
 * @a : pointer.
 * @n : index.
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 1)
	{
		while (i < (n - 1))
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[i]);

	}
	printf("\n");
}
