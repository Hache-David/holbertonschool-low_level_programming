#include "main.h"

/**
 * _search_sqrt - search the natural square root.
 *
 * @index : landmark.
 * @n : input.
 *
 * Return: return index or -1.
 */

int _search_sqrt(int index, int n)
{
	if ((index * index) == n)
		return (index);
	else if (index < n)
		index = _search_sqrt((index + 1), n);
	else if (index > (n / 2))
		index = (-1);
	return (index);
}

/**
 * _sqrt_recursion - check the code.
 *
 * @n: input.
 *
 * Return: return index 0.
 */

int _sqrt_recursion(int n)
{
	int index = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		index = _search_sqrt(index, n);
	return (index);
}
