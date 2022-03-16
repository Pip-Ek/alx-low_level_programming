#include "main.h"
/**
 *print_tiimes_table - a function that
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
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			a = mul / 100;
			b = (mul / 10) % 10;
			c = mul % 10;

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
