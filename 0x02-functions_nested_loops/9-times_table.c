#include "main.h"
/**
 * times_table - print the 9 time table
 * Return: 0
 */
void times_table(void)
{
	int a = 0, b = 1;

	while (a <= 9)
	{
		while (b <= 9)
		{
			_putchar(' ');
			_putchar(a + '0');
			_putchar('*');
			_putchar(b + '0');
			_putchar('=');
			_putchar(a * b + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}

