#include "main.h"

/**
 * _strspn - check the code
 *
 * @s: initial segment.
 * @accept: initial segment.
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenght = 1;
	int i = 0;
	int y;

	while (accept[i] != '\0')
		i++;
	lenght = lenght + i;
	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (y = 0 ; s[y] != '\0' ; y++)
		{
			if (accept[i] == s[y])
				return (lenght);
		}
	}
	return (lenght = 0);
}
