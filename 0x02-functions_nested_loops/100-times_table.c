#include "main.h"
/**
 *print_times_table - a function that
 *prints the n times table.
 *@n: size of the table
 */
void print_times_table(int n)
{
	int i, j, a, b, c, mul;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			mul = i * j;
			a = mul / 100;
			b = (mul / 10) % 10;
			c = mul % 10;
			_putchar(',');
			_putchar(' ');
			if (mul <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (mul <= 99)
			{
				_putchar(' ');
				_putchar(b + '0');
				_putchar(c + '0');
			}
			else
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
