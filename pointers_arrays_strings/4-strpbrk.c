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
	char *s2 = NULL;
	int i = 0;

	while (s[i] != accept[i])
	{
		i++;
	}
	s2 = &s[i - 1];
	return (s2);
}
