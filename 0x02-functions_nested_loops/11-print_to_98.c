#include "main.h"
/**
 * print_to_98 - print up to 98
 * Return: o
 * @n: integer
 */
void print_to_98(int n)
{
	int a = n;

	while (n <= 98)
	{
		if (a > n)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a + '0');
		n++;
	}
	_putchar('\n');
}
