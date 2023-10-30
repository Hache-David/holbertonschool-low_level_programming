#include "main.h"

/**
 * _pow_recursion - check the code
 *
 * @y : value.
 * @x : power.
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	int sum = x;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 0)
		sum = sum * _pow_recursion(x, y - 1);
	return (sum);
}
