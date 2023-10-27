#include "main.h"
#include <stdio.h>
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
	int i = 0;
	int j;
	unsigned int index = 0;

	while (s[i] != '\0')
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				index++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (index);
		}
		i++;
	}

	return (index);
}
