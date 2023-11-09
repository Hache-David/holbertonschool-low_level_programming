#include "main.h"
#include <stdlib.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		str[i] = '\0';
	}
	return (str);
}
