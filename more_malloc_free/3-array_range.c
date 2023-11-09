#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints buffer in hexa
 * @min: minimum
 * @max: maximum
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int i;
	int *str = NULL;

	if (min > max)
		return (NULL);
	str = malloc((max + 1) * sizeof(int));
	if (str == NULL)
		return (NULL);
	for (i = 0; min < max ; min++)
		str[i++] = min;
	str[i] = max;
	return (str);
}
