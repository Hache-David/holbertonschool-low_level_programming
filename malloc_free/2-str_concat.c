#include "main.h"
#include <stdlib.h>

/**
 * str_concat - check the code
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int size1 = 0;
	int size2 = 0;
	int i, j;

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	s3 = malloc(sizeof(char) * (size1 + size2));
	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		s3[i] = s1[i];
	for (j = 0; j < size2; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	return (s3);
}
