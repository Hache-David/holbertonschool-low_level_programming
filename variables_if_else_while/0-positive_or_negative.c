#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	return (1);
}
