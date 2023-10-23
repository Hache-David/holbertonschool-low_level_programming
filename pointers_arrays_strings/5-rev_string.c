#include "main.h"
#include <stdio.h>
/**
 * rev_string - check the code
 *
 * @s : first input.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int taille = 0;
	int i = 0;
	char tmp;

	while (s[i] != '\0')
	{
		taille++;
		i++;
	}

	for (i = taille - 1; i >= taille / 2; i--)
	{
		tmp = s[i];
		s[i] = s[taille - i - 1];
		s[taille - i - 1] = tmp;
	}
}
