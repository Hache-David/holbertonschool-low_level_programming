#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = (n % 10);

	if (i > 5 && i < 10)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
		return (0);
	}
	if (i == 0 && i < 10)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
		return (0);
	}
	if (i < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
		return (0);
	}
	return (1);
}
