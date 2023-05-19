#include <stdio.h>
/**
 * main - prints all possible single digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
