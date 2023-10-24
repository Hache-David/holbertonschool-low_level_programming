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
	int i = 0;
	int nbr = 0;
	unsigned int sum = 0;
	int index = 1;
	int c = 0;
	int stop = 0;
	
	if (s[i] == "")
		return (0);
	while (s[i] != '\0' || stop != 1)
	{
		if (s[i] == 45)
			index = index * (-1);
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (s[i] >= 48 && s[i] <= 57)
			{
				nbr = s[i] - '0';
				if (c > 1)
				{
				sum = (sum * 10) + nbr;
				}
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
		i++;
	}
			return (0);

}
