#include <unistd.h>
#include <stdlib.h>
/**
* print_last_digit - check the code
*
* @i : input arguments.
*
* Return: Always 0.
*/

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	j = abs(j);
	j = j + '0';
	return (write(1, &j, 1));
}
