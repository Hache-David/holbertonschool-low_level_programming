#include "main.h"
#include <unistd.h>
/**
* jack_bauer - Entry point.
*
* Return: Always 0.
*/
void jack_bauer(void)
{
	int m;
	int M;
	int h;
	int H;
	int i;

	m = 0;
	M = 0;
	h = 0;
	H = 0;
	i = 0;

	_putchar(m + '0');
	_putchar(M + '0');
	write(1, ":", 1);
	_putchar(h + '0');
	_putchar(H + '0');
	write(1, "\n", 1);

	while ( H <= 2  && i != 1)
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
		if (h == 4 && H == 2) 
		{
			i++;
		}
		_putchar(H + '0');
		_putchar(h + '0');
		write(1, ":", 1);
		_putchar(M + '0');
		_putchar(m + '0');
		write(1, "\n", 1);
	}


}

