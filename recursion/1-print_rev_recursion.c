#include "main.h"

/**
 * _print_rev_recursion - check the code
 *
 * @s : string.
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(&s[i++]);
	}
	_putchar(s[i]);
}
