#include "main.h"
#include <unistd.h>
/**
* print_sign - Entry point.
*
* @n : argument int received by the function.
*
* Return: Always 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
	{
		write(1, "-", 1);
		return (-1);
	}
}
