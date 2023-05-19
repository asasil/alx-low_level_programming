#include <stdio.h>
/**
 * main - print base 10 using putchar
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
