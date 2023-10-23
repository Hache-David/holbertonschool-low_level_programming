#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: first input.
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
