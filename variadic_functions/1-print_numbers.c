#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 *
 * @n : number of args.
 * @separator : separate args
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d", va_arg(args, int));
	printf("\n");

	va_end(args);
}
