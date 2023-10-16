#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c != '{')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
