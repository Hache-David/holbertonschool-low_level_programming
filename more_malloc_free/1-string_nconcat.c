#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: first string.
 * @s2: second string.
 * @n: n bytes of s2.
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int index1 = 0;
	char *s3 = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[index1] && s1 != NULL)
		index1++;
	s3 = malloc(sizeof(char) * (index1 + n));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		if (s2[j] != '\0')
		{
			s3[i] = s2[j];
			i++;
		}
		else
		{
			s3[i] = '\0';
			return (s3);
		}
	}
	return (s3);
}
