#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c != '{' && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
		if (c == 'q' || c == 'e')
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
