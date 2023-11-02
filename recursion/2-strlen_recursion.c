#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 * @s: string.
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int index = 0;

	if (s[i] == '\0')
	{
		return (index);
	}
	if (s[i + 1] != '\0')
	{
		index = index + _strlen_recursion(&s[i + 1]);
	}
	return (index + 1);
}
