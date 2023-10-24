#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 *
 * @s: pointer.
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i = 0, c = 0, d = 0, stop = 0, nbr = 0;
	unsigned int sum = 0;
	int index = 1;

	if (s[i] == '\0')
		return (0);

	while (s[i] != '\0' || stop != 1)
	{
		if (s[i] == 45)
			index = index * (-1);
		if (s[i] >= 48 && s[i] <= 57)
		{
			d = 1;
			while (s[i] >= 48 && s[i] <= 57)
			{
				nbr = s[i] - '0';
				if (c > 1)
				sum = (sum * 10) + nbr;
				else
				{
					sum = nbr;
					c = 2;
				}
				i++;
			}
			return (sum * index);
			stop = 1;
		}
		if (d == 0 && s[i + 1] == '\0')
			return (0);
		i++;
	}
	return (0);
}
