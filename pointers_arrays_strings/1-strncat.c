#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 *
 * @dest : destination.
 * @src : sourçe.
 * @n : max lenght.
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int m = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	m = i + j;
	for (j = 0 ; j < m && src[j] != '\0' && j < n ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
