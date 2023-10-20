#include "main.h"
#include <stdio.h>
/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
