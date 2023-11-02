#include <stdio.h>

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
	argc = 0;
	for (argc = 0; argv[argc]; argc++)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
