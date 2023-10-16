#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 48;
	char b = 97;

	while (c != 58)
	{
		putchar(c);
		c++;
	}
	while (b != 103)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return(0);
}
