#include "main.h"
/** swap_int - swaps the values of two integers.
 * @b: first integer.
 * @c: second integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
