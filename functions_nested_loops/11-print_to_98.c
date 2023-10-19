#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 *
 * @n : index
 *
 * return : (succes) always 0.
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
