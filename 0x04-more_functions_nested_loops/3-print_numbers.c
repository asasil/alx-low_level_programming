#include "main.h"
/**
 * print_numbers - prints 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
