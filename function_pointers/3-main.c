#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: args count
 * @argv: args value
 *
 * Return: success always 0.
 */

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	int calc = 0;

	if (!(*get_op_func)(&operator)(num1, num2))
	{
		printf("Error\n");
		return (99);
	}
	if (argc < 3)
	{
		printf("Error\n");
		return (98);
	}
	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		return (100);
	}
	calc = (*get_op_func)(&operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
