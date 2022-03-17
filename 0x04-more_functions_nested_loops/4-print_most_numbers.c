#include "main.h"

/**
 * print_most_numbers - Prints all numbers 
 * except 2 and 4
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	int a;

	for (a = "0"; a < "10"; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a);
	}
	_putchar('\n');
}
