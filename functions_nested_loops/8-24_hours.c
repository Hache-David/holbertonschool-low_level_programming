#include "main.h"
#include <unistd.h>
/**
* jack_bauer - Entry point.
*
* Return: Always 0.
*/
void jack_bauer(void)
{
	int m = 0;
	int M = 0;
	int h = 0;
	int H = 0;
	int i = 0;

	_putchar(m + '0');
	_putchar(M + '0');
	write(1, ":", 1);
	_putchar(h + '0');
	_putchar(H + '0');
	write(1, "\n", 1);

	while (H <= 2  && i != 1)
	{
		m++;
		if (m == 10)
		{
			M++;
			m = 0;
		}
		if (M == 6)
		{
			h++;
			M = 0;
		}
		if (h == 10 && H != 2)
		{
			H++;
			h = 0;
		}
		if (h == 3 && H == 2 && M == 5 && m == 9)
			i++;
		_putchar(H + '0');
		_putchar(h + '0');
		write(1, ":", 1);
		_putchar(M + '0');
		_putchar(m + '0');
		write(1, "\n", 1);
	}
}
