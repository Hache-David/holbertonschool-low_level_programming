#include "main.h"
#include <unistd.h>
/**
* times_table - Entry point.
*
* Return: Always 0.
*/
void times_table(void)
{
	int i1 = 0;
	int i2 = 0;
	int i3;

	while (i1 <= 9)
	{
		while (i2 <= 9)
		{
			i3 = i2 * i1;
			if (i2 == 9 && i3 < 10)
			{
				write(1, "  ", 2);
				_putchar(i3 + '0');
				write(1, "\n", 1);
			}
			else if (i2 < 9 && i3 < 10)
			{
				write(1, "  ", 2);
				_putchar(i3 + '0');
				write(1, ",", 1);
			}
			else if (i2 < 9 && i3 >= 10)
			{
				write(1, " ", 1);
				_putchar((i3 / 10) + '0');
				_putchar((i3 % 10) + '0');
				write(1, ",", 1);
			}
			else if (i2 == 9 && i3 >= 10)
			{
				write(1, " ", 1);
				_putchar((i3 / 10) + '0');
				_putchar((i3 % 10) + '0');
				write(1, "\n", 1);
			}
			i2++;
		}
		i1++;
		i2 = 0;
	}
}


