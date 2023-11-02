#include "main.h"

/**
 * _puts_recursion - check the code
 *
 * @s: string.
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
	{
		_puts_recursion(&s[i]);
	}
	if (s[i] == '\0' && i > 1)
	{
		_putchar('\n');
	}
}
