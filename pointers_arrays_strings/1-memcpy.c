#include "main.h"

/**
 * _memcpy - prints buffer in hexa.
 *
 * @dest: destination.
 * @src: sourçe.
 * @n: bytes.
 *
 * Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; src[i] != '\0' ; i++)
		dest[i] = 0;
	return (dest);
}
