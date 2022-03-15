#include "main.h"

/**
 * print_alphabet_c10 - Prints the alphabet 10 times.
 *
 * Return; Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (a = 0; a <= 9; a++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
