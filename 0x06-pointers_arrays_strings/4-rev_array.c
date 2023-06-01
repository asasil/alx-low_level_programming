#include "main.h"
/**
 * reverse_array - reverses integer array
 * @a: pointer
 * @n: integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int r = 0;
	int tmp = a[r];

	while (r < n)
	{
		if (r != 0)
		{
			_putchar(',');
		}
		_putchar(tmp + '0');
		r++;
	}
	_putchar('\n');
}
