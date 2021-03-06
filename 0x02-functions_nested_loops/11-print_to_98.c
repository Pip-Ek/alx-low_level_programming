#include <stdio.h>
/**
 * print_to_98 - print natural
 * number from n to 98
 *
 * @n: the starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", 98);
}
