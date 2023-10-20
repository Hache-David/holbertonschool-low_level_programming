#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if ( a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
