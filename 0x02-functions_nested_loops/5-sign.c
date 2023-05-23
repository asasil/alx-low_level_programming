#include "main.h"
/**
 * print_sign - checks the signs of a number
 *@n: checks for '+' or '-' sign
 * Return: 1 (success) 0 (fail)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
