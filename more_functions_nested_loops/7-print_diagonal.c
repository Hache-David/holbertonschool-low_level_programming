#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: input argt.
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		x = 2;
		while (x <= i)
		{
			_putchar(' ');
			x++;
		}
		_putchar(92);
		_putchar('\n');
	}
}

