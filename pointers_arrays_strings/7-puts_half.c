#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: first input.
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int taille = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		taille++;
		i++;
	}
	for (i = 0; i <= taille; i++)
	{
		if ((taille % 2) == 0)
		{
			if (i >= (taille / 2))
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i >= (taille - 1) / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
