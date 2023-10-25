#include "main.h"
#include <stdio.h>
/**
 * _strcmp - check the code
 *
 * @s1 : first string.
 * @s2 : second string.
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] > s2[i])
	{
		index = (s2[i] - s1[i]);
		return (-1 * index);
	}
	if (s1[i] < s2[i])
	{
		index = (s1[i] - s2[i]);
		return (index);
	}
	return (index);
}
