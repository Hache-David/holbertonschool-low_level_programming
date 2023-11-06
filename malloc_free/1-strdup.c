#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check the code
 *
 * @str: string.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int size = 0;
	char *str2 = NULL;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	str2 = malloc(sizeof(char) * size);
	if (str2 == NULL)
		return (NULL);
	for (size = 0; str[size] ; size++)
	{
		str2[size] = str[size];
	}
	return (str2);
	free(str2);
}
