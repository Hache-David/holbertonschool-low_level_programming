#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	n++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
