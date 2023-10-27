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
	int i, y;
	int end = 0;
	unsigned int index = 1;

	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (y = 0; s[y] != '\0' && end != 1 ; y++)
		{
			if (accept[i] == s[y])
			{
				index++;
				end = 1;
			}
		}
		end = 0;
	}
	return (index);
}
