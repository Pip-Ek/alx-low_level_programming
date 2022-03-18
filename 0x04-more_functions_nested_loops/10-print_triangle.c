#include "main.h"

/**
 * print_triangle - Prints a triagnle with a 
 * given size
 * @size: Size of the triangle
 * Return: no return.
 */
void print_traingle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(32);
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
