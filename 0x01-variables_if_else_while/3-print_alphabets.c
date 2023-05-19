#include <stdio.h>
/**
 * main - A code for lower and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'A')
	{
		putchar(upper);
		upper++;
	}
	return (0);
}
