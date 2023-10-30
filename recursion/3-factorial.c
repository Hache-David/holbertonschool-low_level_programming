#include "main.h"

/**
 * factorial - check the code
 *
 * @n: input.
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n == 0)
		return (n = 1);
	else if (n > 0)
		n =  n * factorial(n - 1);
	else if (n < 0)
		n = (-1);
	return (n);
}
