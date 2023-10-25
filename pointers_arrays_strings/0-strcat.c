#include "main.h"

/**
 * _strcat - check the code
 *
 *
 * @dest : destination.
 * @src : sourçe.
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	n = i + j;
	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
