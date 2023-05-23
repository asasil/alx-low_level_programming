#include "main.h"
/**
 * print_last_digit - last digit(modulo)
 * @n: number
 * Return: result
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		n = -n;
	}
	result = n % 10;
	return (result);
}
