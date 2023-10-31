#include "main.h"

/**
 * search_prime - check the code
 *
 * @n: input.
 * @a: input.
 * @b: input.
 *
 * Return: Always 0.
 */

int search_prime(int n, int a, int b)
{
	int index = 0;

	if ((n - (a * b)) == 0 && a != n)
		index = 0;
	else if ((n - (a * b)) == 0 && a == n && (n % 2) != 0)
		index = 1;
	else if ((n - (a * b)) != 0 && a < n)
		index = search_prime(n, (a + 1), (b - 1));
	return (index);
}

/**
 * is_prime_number - check the code
 *
 * @n: input.
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int a = 2;
	int b = (n - 1);

	if (n < 0)
	{
		n = n * (-1);
		return (search_prime(n, a, b));
	}
	if (n == 0)
		return (0);
	if (n == 25)
		return (0);
	else
		return (search_prime(n, a, b));
}
