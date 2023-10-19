#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - Entry point
 *
 *
 *
 *
 * return : (succes) always 0.
 */

void print_to_98(int n)
{
	int i;

	i = n;
	
	while (i != 98)
	{
		if (i >= 98)
		{
			if (i >= 10 && i < 100)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				write(1, ",", 1);
				write(1, " ", 1);
			}
			else
			{
				_putchar((i / 100) + '0');
				_putchar(((i % 100) / 10) + '0');
				_putchar((i % 10) + '0');
				write(1, ",", 1);
				write(1, " ", 1);
			}
			i--;
		}
		else
		{
			if (i >= 10)
			{
				if (i < 0)
				{
					if ( i <= -100)
					{
						write(1, "-", 1);
						_putchar((-i / 100) + '0');
						_putchar(((-i % 100) + '0'));
						_putchar((-i % 10) + '0');
						write(1, ",", 1);
						write(1, " ", 1);
					}
					else
					{	
						write(1 , "-", 1);
						_putchar((-i / 10) + '0');
						_putchar((-i % 10) + '0');
						write(1, ",", 1);
					}
				}
				else
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
					write(1, ",", 1);
				}
				write(1, " ", 1);
			}
			if (i < 10 && i > -10)
			{
				if (i < 0)
				{
					write(1 , "-", 1);
					_putchar(-i + '0');
				}
				else
				{
					_putchar(i + '0');
				}
				write(1, ",", 1);
				write(1, " ", 1);
			}
			i++;
		}
	}
	write(1 , "98", 2);
	write(1, "\n", 1);
}
