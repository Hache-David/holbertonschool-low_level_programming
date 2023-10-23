#include "main.h"

/**
 * swap_int - check the code
 *
 * @a : first input.
 * @b : second input.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
