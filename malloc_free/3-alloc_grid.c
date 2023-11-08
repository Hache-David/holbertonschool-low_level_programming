#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - alloc a grid of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: always 0.
 */

int **alloc_grid(int width, int height)
{
	int **str2;
	int i, j;
	
	if (width <= 0 || height <= 0)
		return (NULL);
		
	str2 = malloc(height * sizeof(int*));
	if (str2 == NULL)
		return (NULL);

	for (j = 0;j < height; j++)
	{
		str2[j] = malloc(sizeof(int) * width);
		if (str2[j] == NULL)
		{
			for(; j >= 0; j--)
				free(str2[j]);

			free(str2);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width ; j++)
		{
			str2[i][j] = 0;
		}
	}
	return (str2);
}
