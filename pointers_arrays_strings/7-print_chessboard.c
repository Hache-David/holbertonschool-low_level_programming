#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 *
 * @a: array.
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int n;

	for (n = 0 ; n < 8 ; n++)
	{
		for (i = 0 ; i < 8 ; i++)
		{
			_putchar(a[n][i]);
		}
	_putchar('\n');
	}
}
