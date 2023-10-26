#include "main.h"

/**
 * leet - check the code for
 *
 * @str : pointer.
 *
 * Return: Always 0.
 */

char *leet(char *str)
{
	int i = 0;
	int y;
	char t1[] = "aAeEoOtTlL";
	char t2[] = "4433007711";

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (y = 0; t1[y] != '\0' ; y++)
		{
			if (t1[y] == str[i])
			{
				str[i] = t2[y];
			}
		}
	}
	return (str);
}
