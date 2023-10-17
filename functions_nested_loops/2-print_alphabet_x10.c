#include "main.h"
#include <unistd.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int print_alphabet_x10(void)
{
	int i;
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	i = 0;

	while (i < 10)
	{
		write(1, &c, 27);
		i++;
	}
	return (0);
}
