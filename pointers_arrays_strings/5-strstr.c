#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 *
 * @haystack: pointer.
 * @needle: pointer.
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int count = 0;
	char *s2 = NULL;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0] && count != 1)
		{
			s2 = &haystack[i];
			count = 1;
		}
		i++;
	}
	return (s2);
}