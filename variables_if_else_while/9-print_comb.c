#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 48;

	while (c != 57)
	{
		putchar(c);
		putchar(',');
		c++;
	}
	putchar(c);
	putchar('\n');
	return (0);
}
