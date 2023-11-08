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
	int j = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] && s1 != NULL)
		size1++;
	while (s2[size2] && s2 != NULL)
		size2++;
	s3 = malloc(sizeof(char) * (size1 + size2));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] && s1 != NULL; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] && s2 != NULL; j++)
	{
		s3[i++] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
