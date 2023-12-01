#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - convert the string in correct base 10.
 *
 * @b: the input string.
 *
 * Return: Always 0 if success.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, indexm = 1;
	int index = 0;

	if (*b == '\0')
		return (0);

	while (b[index])
		index++;

	for (index -= 1; index >= 0; index--)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		length += (b[index] - '0') * indexm;
		indexm = indexm * 2;
	}
	return (length);
}
