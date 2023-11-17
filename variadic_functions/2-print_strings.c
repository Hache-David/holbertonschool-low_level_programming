#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	va_start(args, n);

	
	for (i = 0; i < n; i++)
	{
		if  ( i < (n - 1) && separator != NULL)
			printf("%s%s",va_arg(args, char*), separator);
		else
			printf("%s", va_arg(args, char*));
	}
	va_end(args);
	printf("\n");
}
