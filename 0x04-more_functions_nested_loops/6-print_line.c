#include "main.h"
/**
 * print_line - print a line
 * @n: integer 
 * Return: 0
 */
void print_line(int n)
{
	while (n <= 10)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		n++;
	}
}
