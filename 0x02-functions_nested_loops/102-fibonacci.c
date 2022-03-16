#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints first 50 
 *fibonacci numbers
 *Return: Always 0.
 */
int main(void)
{
	int i;
	long int prev1, prev2, next;

	prev1 = 0;
	prev2 = 1;
	for (i = 0; i < 50; i++)
	{
		next = prev1 + prev2;
		if (i == 49)
			printf("%lu", next);
		else
			printf("%lu, ", next);
		prev1 = prev2;
		prev2 = next;
	}
	printf("\n");
	return (0);
}
