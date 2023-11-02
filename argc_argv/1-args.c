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
	*argv = NULL;
	printf("%d\n", (argc - 1));
	return (0);
}
