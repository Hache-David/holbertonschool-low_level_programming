#include <stdio.h>
#include "main.h"

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

/**
 * main - Entry point.
 *
 * @argv: an array of pointers to the strings.
 * @argc: argt count.
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int i, j;
	int num1 = 0;
	int sum = 0;

	if (argc < 1)
		return (0);

	for (i = 0; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 65 && argv[i][j] <= 90)
			{
				printf("Error\n");
				return (1);
			}
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	i = 1;
	while (argv[i])
	{
		num1 = _atoi(argv[i]);
		if (num1 == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + num1;
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
