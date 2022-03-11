#include<unistd.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, string, strlen(string));
	return (1);
}
