#include "main.h"
/**
 * times_table - print the 9 time table
 * Return: 0
 */
void times_table(void)
{
	for (int a = 0; a <= 9; a++)
	{
		for (int j = 1; b <= 9; b++)
		{
			_putchar(' ');
			_putchar(a + '0');
			_putchar('*');
			_putchar(b + '0');
			_putchar('=');
			_putchar(a * b + '0');
			_putchar('\n');
		}
	}
}

