#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars.
 * @c: char variable.
 * @size: the size of the memory to print.
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * (size + 1));
	for (i = 0; i < size; i++)
		str[i] = c;
	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
