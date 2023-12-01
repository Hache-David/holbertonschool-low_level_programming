#include "main.h"

/**
 * get_bit - gets value of bit at the index.
 * @n: The bit.
 * @index: the index.
 *
 * Return: value of bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	else
		return (1);
}
