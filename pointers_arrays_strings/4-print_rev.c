#include "main.h"

/**
 * print_rev - check the code
 *
 * @s : input.
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		while (*(s + 1) != '\0')
		{
			s++;
			i++;
		}
		while (i != 0)
		{
			_putchar(*s);
			s--;
			i--;
		}
	}
	_putchar('\n');
}
