#include "main.h"

/**
 * cap_string - check the code
 *
 * @str : pointer.
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] == '\t' || str[i - 1] == ',' || str[i - 1] == ';')
				str[i] = str[i] - 32;
			if (str[i - 1] == 32 || str[i - 1] == '\n')
				str[i] = str[i] - 32;
			if (str[i - 1] == '.' || str[i - 1] == '!')
				str[i] = str[i] - 32;
			if (str[i - 1] == '?' || str[i - 1] == '"')
				str[i] = str[i] - 32;
			if (str[i - 1] == 41 || str[i - 1] == 40)
				str[i] = str[i] - 32;
			if (str[i - 1] == 123 || str[i - 1] == 125)
				str[i] = str[i] - 32;
			if (str[i - 1] == 123 || str[i - 1] == 125)
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
