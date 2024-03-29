#include "main.h"

/**
 * print_triangle - check the code
 *
 * @size: first argt.
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{

	int i, index, index1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size ; i++)
	{
		index1 = 1;
		index = (size - i);
		while (index1 <= index)
		{
			_putchar(' ');
			index1++;
		}
		while (index1 > index && index1 <= size)
		{
			_putchar('#');
			index1++;
		}
		_putchar('\n');
	}
}
