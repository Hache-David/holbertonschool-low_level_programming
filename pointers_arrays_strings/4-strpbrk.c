#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 *
 * @s: string.
 * @accept : string ref.
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *s2;
	int count = 0;

	while (s[i] != '\0')
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j] && count == 0)
			{
				s2 = &s[i];
				count = 1;
			}
		}
		i++;
	}
	return (s2);
}
