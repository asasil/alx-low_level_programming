#include "main.h"
/**
 * print_square - prints a square
 * Return: 0
 * @size: integer
 */
void print_square(int size)
{
	int a = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (a < size)
	{
		_putchar('#');
		a++;
	}
	_putchar('\n');
}
