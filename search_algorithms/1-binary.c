#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for
 *
 * Return: -1 if array is NULL or value is not present else return value.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t index, min, max;

	if (array == NULL)
		return (-1);

	for (min = 0, max = size - 1; max >= min;)
	{
		printf("Searching in array: ");
		for (index = min; index < max; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = min + (max - min) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			max = index - 1;
		else
			min = index + 1;
	}

	return (-1);
}
