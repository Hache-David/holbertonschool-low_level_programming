#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 *
 * @b: size.
 *
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
