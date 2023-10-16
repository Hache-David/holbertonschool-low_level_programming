#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c != '{')
	{
		putchar(c);
		c++;
	}
	while (b != '[')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
