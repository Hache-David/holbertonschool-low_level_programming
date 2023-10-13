#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	long int li;
	float fl;

	printf	("Size of char : %lu byte(s)\n", (unsigned long)sizeof(i));
	printf	("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf	("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf	("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf	("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}
