#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - check the code
 *
 * @separator: separate string
 * @n: number of argt
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
