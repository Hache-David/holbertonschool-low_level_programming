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
	argc = 1;
	printf("%s\n", argv[0]);
	return (argc);
}
