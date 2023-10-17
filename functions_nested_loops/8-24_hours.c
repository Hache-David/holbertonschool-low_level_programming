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

	m = 0;
	M = 0;
	h = 0;
	H = 0;

	while (H != 3)
	{
		_putchar(H + '0');

		if (H == 2 && h == 3 && M == 5 && m == 9)
		{
			H = 3;
		}
		_putchar(h + '0');
		write(1, ":", 1);
		_putchar(M + '0');
		_putchar(m + '0');
		write(1, "\n", 1);
		if (m == 9)
		{
			m = 0;
			M = M + 1;
		}
		if (M == 6)
		{
			M = 0;
			h = h + 1;
		}
		if (h == 9)
		{
			h = 0;
			H = H + 1;
		}
		m++;
	}
}

