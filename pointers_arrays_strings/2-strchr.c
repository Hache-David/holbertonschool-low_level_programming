#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 *
 * @s: string.
 * @c: charactere.
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	char *s2 = NULL;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			s2 = &s[i];
			return (s2);
		}
	}
	if (c == '\0')
		s2 = &s[i + 1];
	return (s2);
}
