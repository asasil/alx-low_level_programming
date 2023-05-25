#include "main.h"
/**
 * more_numbers - numbers 1 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int a = 1;
	int n = 0;

	while (a < 10)
	{
		n = 0;
		while (n < 15)
		{
			_putchar(n + '0');
			n++;
		}
		_putchar('\n');
		a++;
	}
}
